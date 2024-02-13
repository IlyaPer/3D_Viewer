/**
 * @file main.cpp
 * @author sigridva lauralep
 * @date 11 Fedruary 2024
 * @brief File contains execution of whole application.
 *
 */
#include <locale.h>

#include <QApplication>

#include "../controller/controller.h"

s21::Controller
    *s21::Controller::instance;  // Статический контроллер для паттерна синглтон

int main(int argc, char *argv[]) {
  setlocale(LC_ALL, "C");
  QApplication a(argc, argv);
  s21::MainWindow w;
  s21::Model mdl;
  s21::Controller *ctrl;
  ctrl = s21::Controller::getInstance(&mdl, &w);
  w.show();

  return a.exec();
}
