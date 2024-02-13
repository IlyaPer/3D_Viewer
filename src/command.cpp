/**
 * @file command.cpp
 * @author sigridva lauralep
 * @date 11 Fedruary 2024
 * @brief File containing implementation of class Command, which implements
 * pattern Command.
 *
 */
#include "command.h"

namespace s21 {

Command::Command(QObject *parent) : QObject{parent} {
  emit SendToGLWidget(*this);
}

Command::Command(Command &cmd2) : QObject(nullptr) {
  projection_type = cmd2.projection_type;
  angles = cmd2.angles;
  translate = cmd2.translate;
  rgbBackground = cmd2.rgbBackground;
  rgbVertice = cmd2.rgbVertice;
  rgbEdge = cmd2.rgbEdge;
  pointerToVertices_ = cmd2.pointerToVertices_;
  verticesNum_ = cmd2.verticesNum_;
  pointerToFacets_ = cmd2.pointerToFacets_;
  facetsNum_ = cmd2.facetsNum_;
  lineType = cmd2.lineType;
  width_lines = cmd2.width_lines;
}

Command Command::operator=(Command &cmd2) {
  projection_type = cmd2.projection_type;
  angles = cmd2.angles;
  translate = cmd2.translate;
  rgbBackground = cmd2.rgbBackground;
  rgbVertice = cmd2.rgbVertice;
  rgbEdge = cmd2.rgbEdge;
  pointerToVertices_ = cmd2.pointerToVertices_;
  verticesNum_ = cmd2.verticesNum_;
  pointerToFacets_ = cmd2.pointerToFacets_;
  facetsNum_ = cmd2.facetsNum_;
  lineType = cmd2.lineType;
}

void Command::setFilePath(const std::string &newFilePath) {
  filePath = newFilePath;
}

std::string Command::getFilePath() { return filePath; }

void Command::setGl() { emit SendToGLWidget(*this); }

void Command::setObjInfo(double *pointerToVertices, int verticesNum,
                         unsigned int *pointerToFacets,
                         int facetsNum) noexcept {
  pointerToVertices_ = pointerToVertices;
  verticesNum_ = verticesNum;
  pointerToFacets_ = pointerToFacets;
  facetsNum_ = facetsNum;
  emit SendToGLWidget(*this);
}

unsigned int *Command::getFacets() noexcept { return pointerToFacets_; }

double *Command::getVertices() noexcept { return pointerToVertices_; }

unsigned int Command::getVerticesNum() noexcept { return verticesNum_; }

unsigned int Command::getFacetsNum() noexcept { return facetsNum_; }

void Command::setLineType(int type) noexcept {
  lineType = type;
  emit SendToGLWidget(*this);
}

int Command::getTypeLine() noexcept { return lineType; }

void Command::setVerticeType(int type) noexcept {
  verticeType = type;
  emit SendToGLWidget(*this);
}

int Command::getVerticeType() noexcept { return verticeType; }

void Command::setEdgeWidth(int width) noexcept {
  width_lines = width;
  emit SendToGLWidget(*this);
}

int Command::getEdgeWidth() noexcept { return width_lines; }

void Command::setVerticeWidth(int width) noexcept {
  width_dots = width;
  emit SendToGLWidget(*this);
}

int Command::getVerticeWidth() noexcept { return width_dots; }

void Command::setProjection(int type) noexcept {
  projection_type = type;
  emit SendToGLWidget(*this);
}

int Command::getProjection() noexcept { return projection_type; }

void Command::setRotationX(float x) noexcept {
  angles.axisX = x;
  emit SendToGLWidget(*this);
}

void Command::setRotationY(float y) noexcept {
  angles.axisY = y;
  emit SendToGLWidget(*this);
}

void Command::setRotationZ(float z) noexcept {
  angles.axisZ = z;
  emit SendToGLWidget(*this);
}

tuple *Command::getAngles() noexcept { return &angles; }

float Command::setScale(float s, float normalization) noexcept {
  scale = s / normalization;
  emit SendToGLWidget(*this);
}

void Command::setTranslateX(float x) noexcept {
  translate.axisX = x / 100;
  emit SendToGLWidget(*this);
}

void Command::setTranslateY(float y) noexcept {
  translate.axisY = y / 100;
  emit SendToGLWidget(*this);
}

void Command::setTranslateZ(float z) noexcept {
  translate.axisZ = z / 100;
  emit SendToGLWidget(*this);
}

void Command::setVerticeColors(const float &r, const float &g,
                               const float &b) noexcept {
  colorsVertice_.axisX = r;
  colorsVertice_.axisY = g;
  colorsVertice_.axisZ = b;
  emit SendToGLWidget(*this);
}

void Command::setEdgeColors(const float &r, const float &g,
                            const float &b) noexcept {
  colorsEdge_.axisX = r;
  colorsEdge_.axisY = g;
  colorsEdge_.axisZ = b;
  emit SendToGLWidget(*this);
}

void Command::setBackColors(const float &r, const float &g,
                            const float &b) noexcept {
  colorsBackground_.axisX = r;
  colorsBackground_.axisY = g;
  colorsBackground_.axisZ = b;
  emit SendToGLWidget(*this);
}

tuple &Command::getBackgroundColor() { return colorsBackground_; }

tuple &Command::getVerticeColor() { return colorsVertice_; }

tuple &Command::getEdgeColor() { return colorsEdge_; }

tuple *Command::getTranslate() { return &translate; }

float Command::getScale() noexcept { return scale; }
}  // namespace s21
