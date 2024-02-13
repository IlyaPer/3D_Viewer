/**
 * @file model.cc
 * @author lauralep sigridva
 * @date 11 Fedruary 2024
 * @brief File containing implementation of class Model, which keeps all methods
 * for working with Model (MVC).
 *
 */
#include "model.h"

s21::Model::Model(QObject *pobj) : QObject(pobj) { obj = new s21::Object(); }

s21::Model::~Model() { delete obj; }

void s21::Model::ApplyCommand(Command &cmd) {
  if (filepath != cmd.getFilePath()) {
    filepath = cmd.getFilePath();
    obj->parseModel(filepath);
  }

  emit ModelToView(*obj);
}
