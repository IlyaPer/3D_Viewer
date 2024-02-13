/**
 * @file glwidget.cpp
 * @author lauralep sigridva
 * @date 11 Fedruary 2024
 * @brief File containing implementation of class GLWidget, which keeps all
 * methods for working with rendering Model.
 *
 */

#include "glwidget.h"

namespace s21 {

void GLWidget::receiveCommand(s21::Command &cmd) {
  cmd_ = &cmd;
  if (vertices != cmd_->getVertices()) {
    firstiInitialize = s21::YES;
    vertices = cmd_->getVertices();
    facets = cmd_->getFacets();
    vertices_num = cmd_->getVerticesNum();
    facets_num = cmd_->getFacetsNum();
  }
  angle_x = cmd_->getAngles()->axisX;
  angle_y = cmd_->getAngles()->axisY;
  angle_z = cmd_->getAngles()->axisZ;

  paint_dot = cmd_->getVerticeType();
  width_dots = cmd_->getVerticeWidth();
  width_lines = cmd_->getEdgeWidth();
  type_lines = cmd_->getTypeLine();

  rDot = cmd_->getVerticeColor().axisX;
  gDot = cmd_->getVerticeColor().axisY;
  bDot = cmd_->getVerticeColor().axisZ;

  rBack = cmd_->getBackgroundColor().axisX;
  gBack = cmd_->getBackgroundColor().axisY;
  bBack = cmd_->getBackgroundColor().axisZ;

  rLine = cmd_->getEdgeColor().axisX;
  gLine = cmd_->getEdgeColor().axisY;
  bLine = cmd_->getEdgeColor().axisZ;

  update();
}

GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent) {
  s21::Command defaultCMD;
  cmd_ = &defaultCMD;
}

GLWidget::~GLWidget() {}

void GLWidget::initializeGL() {
  initializeOpenGLFunctions();
  glEnable(GL_DEBUG_OUTPUT);

  glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glGenBuffers(1, &vertexVBO);

  glGenBuffers(1, &indexBO);
}

void GLWidget::resizeGL(int w, int h) { glClearColor(rBack, gBack, bBack, 1); }

void GLWidget::paintGL() {
  glClearColor(rBack, gBack, bBack, 1);  // background color

  glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
  glEnableClientState(
      GL_VERTEX_ARRAY);  // разрешение использования массива вершин
  glEnable(GL_DEPTH_TEST);  // вкл буфера глубины

  if (firstiInitialize == s21::YES) {
    initializeBuffer();
  }

  glClear(GL_COLOR_BUFFER_BIT |
          GL_DEPTH_BUFFER_BIT);  // очистить буфер цвета и глубины

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();

  if (cmd_->getProjection() != projectionType) {
    projectionType = cmd_->getProjection();
  }

  if (projectionType == s21::PERSPECTIVE) {
    glFrustum(-1, 1, -1, 1, 1, 99999);
    glTranslatef(0, 0, -2.6);
  } else if (projectionType == s21::ORTHO) {
    glOrtho(-1.5, 1.5, -1.5, 1.5, -2, 1000);
  }

  glMatrixMode(GL_MODELVIEW);

  glLoadIdentity();

  glRotatef(angle_x, 1, 0, 0);
  glRotatef(angle_y, 0, 1, 0);
  glRotatef(angle_z, 0, 0, 1);

  if (cmd_->getScale() != scale) {
    scale = cmd_->getScale();
  }
  glScalef(scale, scale, scale);

  move_x = cmd_->getTranslate()->axisX != move_x ? cmd_->getTranslate()->axisX
                                                 : move_x;
  move_y = cmd_->getTranslate()->axisY != move_y ? cmd_->getTranslate()->axisY
                                                 : move_y;
  move_z = cmd_->getTranslate()->axisZ != move_z ? cmd_->getTranslate()->axisZ
                                                 : move_z;
  glTranslatef(move_x, move_y, move_z);

  if (type_lines == s21::DOTTED) {
    glEnable(GL_LINE_STIPPLE);  // рисование пунктиром
    glLineStipple(1, 0x00F0);
  } else {
    glDisable(GL_LINE_STIPPLE);  // возврат линий
  }

  glLineWidth(width_lines);
  glColor3f(rLine, gLine, bLine);  // установка цвета
  //Повторно привязывает буфер вершин.
  glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
  // //Устанавливает указатель на данные вершин в буфере.
  // //В данном случае, указывается, что каждая вершина представлена тремя
  // значениями типа GL_FLOAT.
  glVertexPointer(3, GL_DOUBLE, 0, NULL);
  // //Снова снимает привязку буфера вершин
  glBindBuffer(GL_ARRAY_BUFFER, 0);

  //Включает использование массива вершин.
  glEnableClientState(GL_VERTEX_ARRAY);

  //Повторно привязывает буфер индексов.
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBO);

  // Отрисовывает геометрию, используя индексы в буфере индексов.
  // В данном случае, рисуются линии (GL_LINES) с использованием 37 индексов
  // типа GL_UNSIGNED_INT.

  glDrawElements(GL_LINES, facets_num, GL_UNSIGNED_INT, NULL);

  if (paint_dot != s21::NONE) {  // Рисовать ли точки
    if (paint_dot == s21::ROUND) {
      glEnable(GL_POINT_SMOOTH);  // Круг
    } else if (paint_dot == s21::SQUARE) {
      glDisable(GL_POINT_SMOOTH);  // Квадрат
    }
    glPointSize(width_dots);
    glColor3d(rDot, gDot, bDot);
    glDrawArrays(GL_POINTS, 0, vertices_num);
  }

  GLenum error = glGetError();
  if (error != GL_NO_ERROR) {
    qDebug() << "OpenGL Error:" << error;
  }

  // Снимает привязку буфера индексов.
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

  glDisable(GL_LINE_STIPPLE);
  glDisable(GL_POINT_SMOOTH);

  // Выключает использование массива вершин.
  glDisableClientState(GL_VERTEX_ARRAY);
}

void GLWidget::initializeBuffer() {
  //Генерирует буфер вершин (VBO) и присваивает ему идентификатор vertexVBO.
  // glGenBuffers(1,&vertexVBO);
  //Привязывает созданный буфер вершин (VBO) к контексту OpenGL как массив
  //буфер.
  glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
  //Выделяет память для буфера вершин (VBO) и заполняет его данными из массива
  // vertex. Этот буфер помечен как статический (GL_STATIC_DRAW), что
  //подразумевает, что данные редко будут изменяться.

  glBufferData(GL_ARRAY_BUFFER, sizeof(double) * vertices_num * 3, vertices,
               GL_STREAM_DRAW);

  //Снимает привязку буфера вершин, чтобы избежать случайного изменения данных.
  glBindBuffer(GL_ARRAY_BUFFER, 0);

  //Генерирует буфер индексов (IBO) и присваивает ему идентификатор indexBO.
  // glGenBuffers(1, &indexBO);
  //Привязывает созданный буфер индексов (IBO) к контексту OpenGL.
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBO);
  //Выделяет память для буфера индексов (IBO) и заполняет его данными из массива
  // index. Этот буфер также помечен как статический.
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned int) * facets_num,
               facets, GL_STREAM_DRAW);

  //Снимает привязку буфера индексов.
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
  firstiInitialize = s21::NO;
}

void GLWidget::setVerticesNum(int n) { vertices_num = n; }

void GLWidget::setFacetsNum(int n) { facets_num = n; }

//Хранится текущее положение мыши
void GLWidget::mousePressEvent(QMouseEvent *event) {
  fixed_angle_y = 0.;
  fixed_angle_x = 0.;

  if (event->buttons() & Qt::LeftButton) {
    this->rotationInitializied = 1;
    this->mousePosition =
        event->position();  // если зажата левая клавиша - вращаем относительно
                            // предыдущей ("повернутой") позиции
  } else if (event->buttons() & Qt::RightButton) {
    angle_x = 0.;
    angle_y = 0.;
    update();
  }
}

void GLWidget::mouseMoveEvent(QMouseEvent *event) {
  if (this->rotationInitializied) {
    fixed_angle_y = angle_y;
    fixed_angle_x = angle_x;
    cmd_->setRotationX(angle_x);
    cmd_->setRotationY(angle_y);
    this->rotationInitializied = 0;
  }
  cmd_->setRotationX(
      fixed_angle_x +
      1 / M_PI * (event->pos().y() - mousePosition.y()));  // вывести на экран!
  cmd_->setRotationY(fixed_angle_y +
                     1 / M_PI * (event->pos().x() - mousePosition.x()));
}

void GLWidget::wheelEvent(QWheelEvent *event) {
  if (event->angleDelta().y() > 0 && scale < 10) {
    cmd_->setScale(scale + 0.25f, 1.);
  } else if (event->angleDelta().y() < 0 && scale > 0.25f) {
    cmd_->setScale(scale - 0.25f, 1.);
  }
}

void GLWidget::setVertices(double *v) { vertices = v; }

void GLWidget::setFacets(unsigned int *v) { facets = v; }

}  // namespace s21
