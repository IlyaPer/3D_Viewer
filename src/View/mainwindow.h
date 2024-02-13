/**
 * @file mainwindow.h
 * @author lauralep sigridva
 * @date 11 Fedruary 2024
 * @brief File headings of class MainWindow, which implements GUI of
 * application. It implements pattern Facade, as it refers to classes which
 * realize subtasks and uses pattern Command to incapsulate tasks for Model.
 *
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <../command.h>
#include <qgifimage.h>

#include <QBuffer>
#include <QColorDialog>
#include <QFileDialog>
#include <QImageWriter>
#include <QMainWindow>
#include <QMessageBox>
#include <QSettings>
#include <QStandardPaths>
#include <QStatusBar>
#include <QSystemTrayIcon>
#include <QTimer>
#include <QWidget>

#include "../Model/glwidget.h"
#include "../Model/object.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

namespace s21 {

class ImageSaver {
 public:
  ImageSaver();
  ~ImageSaver();
  void RenderImage(GLWidget *gl, QString format);

 private:
  QTimer *tmr;
  QImage images[50];
  int frameCount;
  int gifMode = 0;
};

class GifRecorder : public QObject {
  Q_OBJECT
 public:
  GifRecorder(GLWidget *gl, int Mode);
  ~GifRecorder();

 public slots:
  void RecordGif();

 private:
  QGifImage gif;
  GLWidget *glInterface;
  QTimer *tmr;
  QImage images[50];
  int frameCount;
  int gifMode = 0;
};

// Класс описания GUI, реализующий элемент View в MVC, паттерн "Фасад", а также
// паттерн наблюдатель

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  void sendCommand(Command &cmd);  // Метод отправки команды

  void setColors();  //!< установка базового цвета

 private slots:
  void on_open_file_clicked();  //!< метод загрузки данных из файла

  // Цвета
  void on_pushButton_colorEdge_clicked();
  void on_pushButton_colorVertice_clicked();
  void on_pushButton_colorBackg_clicked();

  // вращение модели + изменение значение угла поворота с помощью слайдера
  void on_rotateXInput_valueChanged(double arg1);
  void on_rotateYInput_valueChanged(double arg1);
  void on_rotateZInput_valueChanged(double arg1);
  void on_rotationX_slider_valueChanged(int value);
  void on_rotationY_slider_valueChanged(int value);
  void on_rotationZ_slider_valueChanged(int value);

  // масштаб
  void on_scaleSpinBox_valueChanged(double arg1);
  void on_scaleSlider_valueChanged(int value);

  // толщина рёбер
  void on_edgeWidth_slider_valueChanged(int value);
  void on_edgeWidth_spinbox_valueChanged(int arg1);
  void on_scaleToDefault_clicked();
  // движение модели

  void on_moveXInput_valueChanged(double arg1);
  void on_moveYInput_valueChanged(double arg1);
  void on_moveZInput_valueChanged(double arg1);
  void on_MoveSliderX_valueChanged(int value);
  void on_MoveSliderY_valueChanged(int value);
  void on_MoveSliderZ_valueChanged(int value);

  void on_pushButton_downloadImage_clicked();

  void on_verticeSize_slider_valueChanged(int value);

  void on_verticeSize_spinbox_valueChanged(int arg1);

  void on_pushButton_Gif_mode_1_clicked();

 public slots:
  void GetInfo(s21::Object &objectToRender);

  void on_radioButton_orthogonal_clicked(bool checked);

  void on_radioButton_perspective_clicked(bool checked);

  void on_radioButton_noneVertice_toggled(bool checked);

  void on_radioButton_dotted_clicked(bool checked);

  void on_radioButton_circleVertice_toggled(bool checked);

  void on_radioButton_constant_clicked(bool checked);
  void on_radioButton_squareVertice_toggled(bool checked);

 private:
  Command cmd;
  Command cmd1;
  Ui::MainWindow *ui;
  GLWidget *glInterface;
  GifRecorder *gifRecorder;
  ImageSaver *imageSaver;
  QMessageBox msg;  // для вывода предупреждений
  void saveSettings();
  void applySettings();
  void resetMovement();  //!< сброс настроек перемещения модели
 signals:
  void ModelInfo(Command &command);
};

}  // namespace s21
#endif  // MAINWINDOW_H
