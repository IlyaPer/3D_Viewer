/**
 * @file command.h
 * @author sigridva lauralep
 * @date 11 Fedruary 2024
 * @brief File headings of class Command, which implements pattern Command.
 *
 */
#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>

namespace s21 {
enum isFirstiInitialize { NO, YES };
enum typeOfLines { CONSTANT, DOTTED };
enum vertexType { NONE, ROUND, SQUARE };
enum projection { ORTHO, PERSPECTIVE };

typedef struct {
  float axisX = 0.;
  float axisY = 0.;
  float axisZ = 0.;
} tuple;

class Command : public QObject {
  Q_OBJECT
 public:
  explicit Command(QObject *parent = nullptr);
  Command(Command &);
  ~Command() = default;
  Command operator=(Command &);
  void setFilePath(const std::string &newFilePath);
  std::string getFilePath();
  void setGl();
  void setObjInfo(double *pointerToVertices, int verticesNum,
                  unsigned int *pointerToFacets, int facetsNum) noexcept;
  unsigned int *getFacets() noexcept;
  double *getVertices() noexcept;
  unsigned int getVerticesNum() noexcept;
  unsigned int getFacetsNum() noexcept;

  void setLineType(int type) noexcept;
  int getTypeLine() noexcept;

  void setVerticeType(int type) noexcept;
  int getVerticeType() noexcept;

  void setEdgeWidth(int width) noexcept;
  int getEdgeWidth() noexcept;

  void setVerticeWidth(int width) noexcept;
  int getVerticeWidth() noexcept;

  void setProjection(int type) noexcept;
  int getProjection() noexcept;
  void setRotationX(float x) noexcept;
  void setRotationY(float y) noexcept;
  void setRotationZ(float z) noexcept;
  tuple *getAngles() noexcept;
  float getScale() noexcept;
  float setScale(float s, float normalization) noexcept;

  void setTranslateX(float x) noexcept;
  void setTranslateY(float y) noexcept;
  void setTranslateZ(float z) noexcept;

  void setVerticeColors(const float &r, const float &g,
                        const float &b) noexcept;
  void setEdgeColors(const float &r, const float &g, const float &b) noexcept;
  void setBackColors(const float &r, const float &g, const float &b) noexcept;

  tuple &getBackgroundColor();
  tuple &getVerticeColor();
  tuple &getEdgeColor();
  tuple *getTranslate();

 signals:
  void SendToGLWidget(Command &cmd_);

 private:
  bool delete_model = false;
  double *pointerToVertices_ = nullptr;
  int verticesNum_ = 0;
  unsigned int *pointerToFacets_ = nullptr;
  int facetsNum_ = 0;
  int projection_type = PERSPECTIVE;
  double width_lines = 1; /*!< ширина линии */
  double width_dots = 1;  /*!< размер вершин */

  tuple angles = {0, 0, 0};
  tuple translate = {0, 0, 0};
  tuple rgbBackground = {0, 0, 0};
  tuple rgbVertice = {0, 0, 0};
  tuple rgbEdge = {0, 0, 0};

  tuple colorsVertice_ = {0, 1, 0};
  tuple colorsBackground_ = {0, 1, 0};
  tuple colorsEdge_ = {0, 0, 1};

  int lineType = CONSTANT;
  int verticeType = NONE;

  float scale = 1;

  std::string filePath = "./";
};

}  // namespace s21

#endif  // COMMAND_H
