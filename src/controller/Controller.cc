/**
 * @file Controller.cc
 * @author sigridva lauralep
 * @date 11 Fedruary 2024
 * @brief File containing implementstion of class Controller which is a part of
 * MVC pattern.
 *
 */
#include "controller.h"

s21::Controller::Controller(s21::Model *model, QMainWindow *view) {
  model_ = model;
  view_ = view;
  connect(view, SIGNAL(ModelInfo(Command &)), model,
          SLOT(ApplyCommand(Command &)));
  connect(model, SIGNAL(ModelToView(s21::Object &)), view,
          SLOT(GetInfo(s21::Object &)));
};
