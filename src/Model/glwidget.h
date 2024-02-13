/**
 * @file glwidget.h
 * @author lauralep sigridva
 * @date 11 Fedruary 2024
 * @brief File containing header of class GLWidget, which keeps all methods for
 * working with rendering Model.
 *
 */

#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <../command.h>

#include <QMouseEvent>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QString>
#include <QWheelEvent>
#include <QWidget>

namespace Ui {
class GLWidget;
}

namespace s21 {

class GLWidget : public QOpenGLWidget, public QOpenGLFunctions {
  Q_OBJECT

 private:
  double fixed_angle_x; /*!< фиксация угла поворота модели мышкой (фиксируется
                         после того, как мышка "отжата") */
  double fixed_angle_y; /*!< фиксация угла поворота модели мышкой (фиксируется
                         после того, как мышка "отжата") */
  int rotationInitializied =
      1; /*!< фиксирование момента нажатия левой кнопкой мыши */

  bool isMousePressed;
  GLuint vertexVBO;
  GLuint indexBO;
  Ui::GLWidget *ui;
  float rLine = 0; /*!< r-значнение цвета ребра формации rgb */
  float gLine = 1; /*!< g-значнение цвета ребра формации rgb */
  float bLine = 0; /*!< b-значнение цвета ребра формации rgb */
  float rDot = 1; /*!< r-значнение цвета вершины формации rgb */
  float gDot = 0; /*!< g-значнение цвета вершины формации rgb */
  float bDot = 0; /*!< b-значнение цвета вершины формации rgb */
  float rBack = 0; /*!< r-значнение цвета фона формации rgb */
  float gBack = 0; /*!< g-значнение цвета фона формации rgb */
  float bBack = 1; /*!< b-значнение цвета фона формации rgb */

  int type_lines = s21::CONSTANT; /*!< тип линии */
  int paint_dot = s21::NONE;      /*!< тип отрисовки вершин */
  int projectionType = s21::PERSPECTIVE; /*!< тип проекции */

  double width_lines = 1; /*!< ширина линии */
  double width_dots = 1;  /*!< размер вершин */

  float angle_x = 1.;
  float angle_y = 1.;
  float angle_z = 1.;

  float move_x = 1.;
  float move_y = 1.;
  float move_z = 1.;

  float scale = 1.;
  int firstiInitialize = s21::NO;
  unsigned int *facets = nullptr;
  QPointF mousePosition;

 public slots:
  void receiveCommand(s21::Command &cmd);

 public:
  explicit GLWidget(QWidget *parent = nullptr);
  ~GLWidget();
  void setVertices(double *v);
  void setFacets(unsigned int *v);

  void rotate(float a);
  void initializeBuffer();
  void setVerticesNum(int n);
  void setFacetsNum(int n);

 protected:
  s21::Command *cmd_;
  bool block = true;
  double *vertices = nullptr;
  int vertices_num = 0;
  unsigned int facets_num = 0;
  void initializeGL() override;  // вызыв 1 раз при создании окна

  // вызывается каждый раз при изменении размеров виджета
  // в нем настраивают матрицу проекций используемую для отбражения
  void resizeGL(int w, int h) override;
  // выз каждый раз при перерисовке содержимого окна(при изменении размеров
  // окна, если дать явную команду перерисовке с помощью update())
  void paintGL() override;

  void mousePressEvent(QMouseEvent *event) override;
  void mouseMoveEvent(QMouseEvent *event) override;
  void wheelEvent(QWheelEvent *event) override;
};
}  // namespace s21

#endif  // GLWIDGET_H
