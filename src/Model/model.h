/**
 * @file model.h
 * @author sigridva lauralep
 * @date 11 Fedruary 2024
 * @brief File containing Model of project 3D_viewer, implementing pattern MVC.
 *
 */

#ifndef MODEL_H
#define MODEL_H

#include <QObject>

#include "../View/mainwindow.h"
#include "object.h"

namespace s21 {
class Model : public QObject {
  Q_OBJECT

 private:
  Object *obj = nullptr;
  std::string filepath = "";

 public:
  Model(QObject *pobj = 0);
  virtual ~Model();

 public slots:
  void ApplyCommand(Command &cmd);

 signals:
  void ModelToView(s21::Object &objectToRender);
};

}  // namespace s21

#endif  // MODEL_H
