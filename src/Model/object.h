/**
 * @file controller.h
 * @author sigridva lauralep
 * @date 11 Fedruary 2024
 * @brief File containing headings of class Object, which keeps all information
 * about vertices and facets of each model
 */

#ifndef OBJECT_H
#define OBJECT_H
#include <cmath>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>

#define INCORRECT_PATH "Error: incorrect path given"
#define INCORRECT_NUMBER "Error: incorrect number found in line"
#define INCORRECT_EXTENSION "Error: only obj files"
#define INCORRECT_FACET "Error: negative of float value for facet"
#define INCORRECT_FACET_LIMIT "Error: value for facet overfloat"
#define INCORRECT_FACET_NUMBER "Error: too small value for facets"
#define MEMORY_LIMIT "Error: not enough RAM to upload model"
#define DEFAULT_SIZE 1024

namespace s21 {
using std::ifstream;
using std::string;

struct matrix_t {
  double *vertices = nullptr;
  int size = 0;
  size_t buffer_size = DEFAULT_SIZE * 3;
};

struct polygon_t {
  int vertices_num = 0;
  size_t buffer_size = DEFAULT_SIZE;
  unsigned int *vertices_indexes = nullptr;
};

enum class Axes { X = 0, Y = 1, Z = 2 };

class Object {
 public:
  Object();
  void parseModel(string filename);
  ~Object();
  int getVerticesNum();
  unsigned int getFacesNum();
  std::string getFilepath();
  double *getVetices();
  unsigned int *getFacets();

 private:
  std::string filepath = "";
  int vertices_num = 0;
  int facets_num = 0;
  size_t polygons_buffer_size = DEFAULT_SIZE;
  matrix_t coordinates;  // хранит значения координат x y z
  polygon_t polygons;  // хранит грани в формате (кол-во вершин, которые надо
                       // соединить) и номера вершин, которые надо соединить

  double x_min = __DBL_MAX__;
  double y_min = __DBL_MAX__;
  double z_min = __DBL_MAX__;

  double x_max = __DBL_MIN__;
  double y_max = __DBL_MIN__;
  double z_max = __DBL_MIN__;

  void extractVerticleFromLine(string line);
  void extractFacetFromLine(string line);
  void normalizeVertices() noexcept;
  void freeModel();
};

std::queue<double> excludeTokens(string s);
}  // namespace s21

#endif  // OBJECT_H
