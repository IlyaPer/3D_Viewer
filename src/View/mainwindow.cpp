/**
 * @file mainwindow.cpp
 * @author lauralep sigridva
 * @date 11 Fedruary 2024
 * @brief File contains implementation of class MainWindow.
 *
 */
#include "mainwindow.h"

#include "ui_mainwindow.h"

namespace s21 {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  glInterface = ui->openGLWidget;
  connect(&cmd1, &Command::SendToGLWidget, glInterface,
          &GLWidget::receiveCommand);
  applySettings();
}

MainWindow::~MainWindow() {
  saveSettings();

  delete glInterface;
  delete ui;
}

void MainWindow::sendCommand(Command &cmd) {
  try {
    emit ModelInfo(cmd);  // Отправка сигнала
  } catch (const std::exception &ex) {
    msg.critical(&msg, "Ошибка загрузки модели", ex.what());
  }
}

void MainWindow::on_open_file_clicked() {
  QString filename =
      QFileDialog::getOpenFileName(this, "Choose a file", "/", "*.obj");

  ui->label_filepathInfo->setText("");
  ui->label_verticesInfo->setText("");
  ui->label_edgesNumber->setText("");

  cmd.setFilePath(filename.toStdString());
  sendCommand(cmd);
}

///@brief Сброс поворотов, движения, масштаба модели
void MainWindow::on_scaleToDefault_clicked() {
  ui->rotateXInput->setValue(0);
  ui->rotateYInput->setValue(0);
  ui->rotateZInput->setValue(0);

  ui->scaleSpinBox->setValue(100);

  ui->moveXInput->setValue(0);
  ui->moveYInput->setValue(0);
  ui->moveZInput->setValue(0);

  ui->verticeSize_spinbox->setValue(1);

  ui->edgeWidth_spinbox->setValue(1);

  ui->radioButton_orthogonal->toggle();
  ui->radioButton_noneVertice->toggle();
  ui->radioButton_constant->toggle();
  ui->radioButton_jpgFormat->toggle();
}

///@brief Вращение вокруг оси X слайдером
void MainWindow::on_rotateXInput_valueChanged(double arg1) {
  ui->rotationX_slider->setValue(ui->rotateXInput->value());
  cmd1.setRotationX(arg1);
}

///@brief Вращение вокруг оси Y слайдером
void MainWindow::on_rotateYInput_valueChanged(double arg1) {
  ui->rotationY_slider->setValue(ui->rotateYInput->value());
  cmd1.setRotationY(arg1);
}

///@brief Вращение вокруг оси Z слайдером
void MainWindow::on_rotateZInput_valueChanged(double arg1) {
  ui->rotationZ_slider->setValue(ui->rotateZInput->value());
  cmd1.setRotationZ(arg1);
}

///@brief Вращение вокруг оси Y спинбоксом
void MainWindow::on_rotationY_slider_valueChanged(int value) {
  ui->rotateYInput->setValue((double)value);
}

///@brief Вращение вокруг оси X спинбоксом
void MainWindow::on_rotationX_slider_valueChanged(int value) {
  ui->rotateXInput->setValue((double)value);
}

///@brief Вращение вокруг оси Z спинбоксом
void MainWindow::on_rotationZ_slider_valueChanged(int value) {
  ui->rotateZInput->setValue((double)value);
}

///@brief Перемещение по оси X слайдером
void MainWindow::on_moveXInput_valueChanged(double arg1) {
  ui->MoveSliderX->setValue(ui->moveXInput->value());
  cmd1.setTranslateX(arg1);
}

///@brief Перемещение по оси Y слайдером
void MainWindow::on_moveYInput_valueChanged(double arg1) {
  ui->MoveSliderY->setValue(ui->moveYInput->value());
  cmd1.setTranslateY(arg1);
}

///@brief Перемещение по оси Z слайдером
void MainWindow::on_moveZInput_valueChanged(double arg1) {
  ui->MoveSliderZ->setValue(ui->moveZInput->value());
  cmd1.setTranslateZ(arg1);
}

///@brief Перемещение по оси X спинбоксом
void MainWindow::on_MoveSliderX_valueChanged(int value) {
  ui->moveXInput->setValue((double)value);
}

///@brief Перемещение по оси Y спинбоксом
void MainWindow::on_MoveSliderY_valueChanged(int value) {
  ui->moveYInput->setValue((double)value);
}

///@brief Перемещение по оси Z спинбоксом
void MainWindow::on_MoveSliderZ_valueChanged(int value) {
  ui->moveZInput->setValue((double)value);
}

void MainWindow::GetInfo(s21::Object &objectToRender) {
  ui->label_filepathInfo->setText(
      QString::fromStdString(objectToRender.getFilepath()));
  ui->label_verticesInfo->setText(
      QString::number(objectToRender.getVerticesNum()));
  ui->label_edgesNumber->setText(
      QString::number(objectToRender.getFacesNum() / 2));
  cmd1.setObjInfo(objectToRender.getVetices(), objectToRender.getVerticesNum(),
                  objectToRender.getFacets(), objectToRender.getFacesNum());
}

///@brief Изменение масштаба спинбоксом
void MainWindow::on_scaleSpinBox_valueChanged(double arg1) {
  ui->scaleSlider->setValue(arg1);
  cmd1.setScale(arg1, 100);
}

///@brief Изменение масштаба слайдером
void MainWindow::on_scaleSlider_valueChanged(int value) {
  ui->scaleSpinBox->setValue(value);
}

void MainWindow::on_edgeWidth_slider_valueChanged(int value) {
  ui->edgeWidth_spinbox->setValue(value);
  cmd1.setEdgeWidth(value);
}

void MainWindow::on_edgeWidth_spinbox_valueChanged(int arg1) {
  ui->edgeWidth_slider->setValue(arg1);
  cmd1.setEdgeWidth(arg1);
}

///@brief Выбор цвета граней
void MainWindow::on_pushButton_colorEdge_clicked() {
  QColor lineColor = QColorDialog::getColor(Qt::white, this);
  float r, g, b;
  lineColor.getRgbF(&r, &g, &b);
  cmd1.setEdgeColors(r, g, b);
  setColors();
}

///@brief Выбор цвета вершин
void MainWindow::on_pushButton_colorVertice_clicked() {
  QColor verticeColor = QColorDialog::getColor(Qt::white, this);
  float r, g, b;
  verticeColor.getRgbF(&r, &g, &b);
  cmd1.setVerticeColors(r, g, b);
  setColors();
}

///@brief Выбор цвета фона
void MainWindow::on_pushButton_colorBackg_clicked() {
  QColor backgColor = QColorDialog::getColor(Qt::white, this);
  float r, g, b;
  backgColor.getRgbF(&r, &g, &b);
  cmd1.setBackColors(r, g, b);
  setColors();
}

void MainWindow::setColors() {
  QString colorLines = QString("background: rgb(%1, %2, %3);")
                           .arg(cmd1.getEdgeColor().axisX * 255)
                           .arg(cmd1.getEdgeColor().axisY * 255)
                           .arg(cmd1.getEdgeColor().axisZ * 255);
  ui->label_colorEdges->setStyleSheet(colorLines);
  QString colorVertices = QString("background: rgb(%1, %2, %3);")
                              .arg(cmd1.getVerticeColor().axisX * 255)
                              .arg(cmd1.getVerticeColor().axisY * 255)
                              .arg(cmd1.getVerticeColor().axisZ * 255);
  ui->label_colorVertice->setStyleSheet(colorVertices);
  QString colorBackg = QString("background: rgb(%1, %2, %3);")
                           .arg(cmd1.getBackgroundColor().axisX * 255)
                           .arg(cmd1.getBackgroundColor().axisY * 255)
                           .arg(cmd1.getBackgroundColor().axisZ * 255);
  ui->label_colorBackg->setStyleSheet(colorBackg);
}

void MainWindow::on_radioButton_orthogonal_clicked(bool checked) {
  (void)checked;
  cmd1.setProjection(ORTHO);
}

void MainWindow::on_radioButton_perspective_clicked(bool checked) {
  (void)checked;
  cmd1.setProjection(PERSPECTIVE);
}

void MainWindow::on_radioButton_constant_clicked(bool checked) {
  (void)checked;
  cmd1.setLineType(CONSTANT);
}

void MainWindow::on_radioButton_dotted_clicked(bool checked) {
  (void)checked;
  cmd1.setLineType(DOTTED);
}

void MainWindow::on_pushButton_downloadImage_clicked() {
  imageSaver->RenderImage(glInterface, (ui->radioButton_jpgFormat->isChecked())
                                           ? "*.jpg"
                                           : "*.bmp");
}

//@brief Сохранение настроек приложения
void MainWindow::saveSettings() {
  QSettings settings("s21", "viewer");
  // тип проекции
  settings.setValue("viewerSettings/projection_orthogonal",
                    ui->radioButton_orthogonal->isChecked());
  // тип ребер
  settings.setValue("viewerSettings/edgeDotted",
                    ui->radioButton_dotted->isChecked());
  // цвет ребер
  settings.setValue("viewerSettings/edgeColor/r", cmd1.getEdgeColor().axisX);
  settings.setValue("viewerSettings/edgeColor/g", cmd1.getEdgeColor().axisY);
  settings.setValue("viewerSettings/edgeColor/b", cmd1.getEdgeColor().axisZ);

  // толщина рёбер
  settings.setValue("viewerSettings/edgeWidth", cmd1.getEdgeWidth());

  // тип вершин
  settings.setValue("viewerSettings/noneVertice",
                    ui->radioButton_noneVertice->isChecked());
  settings.setValue("viewerSettings/circleVertice",
                    ui->radioButton_circleVertice->isChecked());
  // размер вершин
  settings.setValue("viewerSettings/verticeSize",
                    ui->verticeSize_spinbox->value());
  // цвет вершин
  settings.setValue("viewerSettings/verticeColor/r",
                    cmd1.getVerticeColor().axisX);
  settings.setValue("viewerSettings/verticeColor/g",
                    cmd1.getVerticeColor().axisY);
  settings.setValue("viewerSettings/verticeColor/b",
                    cmd1.getVerticeColor().axisZ);

  // цвет фона
  settings.setValue("viewerSettings/backgroundColor/r",
                    cmd1.getBackgroundColor().axisX);
  settings.setValue("viewerSettings/backgroundColor/g",
                    cmd1.getBackgroundColor().axisY);
  settings.setValue("viewerSettings/backgroundColor/b",
                    cmd1.getBackgroundColor().axisZ);

  settings.sync();
}

/// @brief Применяет настройки с предыдущего запуска
void MainWindow::applySettings() {
  QSettings settings("s21", "viewer");
  if (settings.contains("viewerSettings/edgeDotted")) {
    // загрузка типа проекции
    ui->radioButton_orthogonal->setChecked(
        settings.value("viewerSettings/projection_orthogonal").toBool());

    if (settings.value("viewerSettings/projection_orthogonal").toBool()) {
      cmd1.setProjection(ORTHO);
    }
    // загрузка типа рёбер
    if (settings.value("viewerSettings/edgeDotted").toBool()) {
      ui->radioButton_dotted->toggle();
    } else {
      ui->radioButton_constant->toggle();
    }
    // загрузка цвета ребер
    cmd1.setEdgeColors(settings.value("viewerSettings/edgeColor/r").toFloat(),
                       settings.value("viewerSettings/edgeColor/g").toFloat(),
                       settings.value("viewerSettings/edgeColor/b").toFloat());

    // загрузка толщины рёбер
    cmd1.setEdgeWidth(settings.value("viewerSettings/edgeWidth").toInt());
    ui->edgeWidth_spinbox->setValue(
        settings.value("viewerSettings/edgeWidth").toFloat());

    // загрузка размера вершин
    cmd1.setVerticeWidth(settings.value("viewerSettings/verticeSize").toInt());
    ui->verticeSize_spinbox->setValue(
        settings.value("viewerSettings/verticeSize").toFloat());

    // загрузка типа вершин
    if (settings.value("viewerSettings/noneVertice").toBool()) {
      ui->radioButton_noneVertice->toggle();
      // cmd1.setVerticeType(0);
    } else if (settings.value("viewerSettings/circleVertice").toBool()) {
      ui->radioButton_circleVertice->toggle();
      // cmd1.setVerticeType(1);
    } else {
      ui->radioButton_squareVertice->toggle();
      // cmd1.setVerticeType(2);
    }

    // загрузка цвета вершин
    cmd1.setVerticeColors(
        settings.value("viewerSettings/verticeColor/r").toFloat(),
        settings.value("viewerSettings/verticeColor/g").toFloat(),
        settings.value("viewerSettings/verticeColor/b").toFloat());

    // загрузка цвета фона
    cmd1.setBackColors(
        settings.value("viewerSettings/backgroundColor/r").toFloat(),
        settings.value("viewerSettings/backgroundColor/g").toFloat(),
        settings.value("viewerSettings/backgroundColor/b").toFloat());
  }
}

void MainWindow::on_radioButton_noneVertice_toggled(bool checked) {
  (void)checked;
  cmd1.setVerticeType(0);
}

void MainWindow::on_radioButton_circleVertice_toggled(bool checked) {
  (void)checked;
  cmd1.setVerticeType(1);
}

void MainWindow::on_radioButton_squareVertice_toggled(bool checked) {
  (void)checked;
  cmd1.setVerticeType(2);
}

void MainWindow::on_verticeSize_slider_valueChanged(int value) {
  ui->verticeSize_spinbox->setValue(value);
  cmd1.setVerticeWidth(value);
}

void MainWindow::on_verticeSize_spinbox_valueChanged(int arg1) {
  ui->verticeSize_slider->setValue(arg1);
  cmd1.setVerticeWidth(arg1);
}

ImageSaver::ImageSaver() {}

ImageSaver::~ImageSaver() {}

void ImageSaver::RenderImage(GLWidget *gl, QString format) {
  QMessageBox msg;
  QImage img = gl->grabFramebuffer();
  QString str =
      QFileDialog::getSaveFileName(0, "Сохранить файл как", "", format);
  if (!img.save(str, format.remove(0, 2).toUpper().toLocal8Bit())) {
    msg.critical(&msg, "Ошибка рендера изображения", "Неизвестная ошибка");
  }
}

GifRecorder::GifRecorder(GLWidget *gl, int Mode) {
  glInterface = gl;
  frameCount = 0;
  gifMode = Mode;
  tmr = new QTimer();
  connect(tmr, SIGNAL(timeout()), this, SLOT(RecordGif()));
  tmr->start(100);
}

GifRecorder::~GifRecorder() {}

void GifRecorder::RecordGif() {
  if (frameCount == 50) {
    tmr->stop();
    disconnect(tmr);
    delete (tmr);
    frameCount = 0;
    for (int i = 0; i < 50; gif.addFrame(images[i++], 100)) {
    }
    QString str =
        QFileDialog::getSaveFileName(0, "Сохранить файл как", "", "*.gif");
    gif.save(str);
  } else {
    if (gifMode == 1) {
      images[frameCount++] = glInterface->grabFramebuffer().scaled(
          640, 480, Qt::IgnoreAspectRatio);
    } else if (gifMode == 2) {
      images[frameCount++] = glInterface->grabFramebuffer();
    }
  }
}

void MainWindow::on_pushButton_Gif_mode_1_clicked() {
  gifRecorder = new GifRecorder(glInterface, 1);
  gifRecorder->RecordGif();
}
}  // namespace s21
