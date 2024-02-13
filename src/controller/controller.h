/**
 * @file controller.h
 * @author sigridva lauralep
 * @date 11 Fedruary 2024
 * @brief File containing header of class Controller which is a part of MVC
 * pattern.
 *
 */

#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "../Model/model.h"
#include "../View/mainwindow.h"

namespace s21 {
class Controller : public QObject {
  Q_OBJECT

 private:
  Controller(s21::Model *model, QMainWindow *view);
  static Controller *instance;
  s21::Model *model_;
  QMainWindow *view_;

 public:
  static Controller *getInstance(s21::Model *model, QMainWindow *view) {
    if (!instance) {
      instance = new Controller(model, view);
    }

    return instance;
  }
  // Controller(s21::Model *model, QMainWindow *view);
  ~Controller() = default;
};
}  // namespace s21

#endif
