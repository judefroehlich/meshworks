#ifndef OBJECT_H
#define OBJECT_H

#include <cstdint>
#include <vector>

struct Vertex {
  float x, y, z;
  uint32_t color;
};

class Object {
private:
  std::vector<Vertex> points;

public:
  // Declare functions here (you can implement small ones inline)
  void addVertex(const Vertex &v) { points.push_back(v); }

  std::vector<Vertex> getPoints() { return points; }
};

#endif // OBJECT_H