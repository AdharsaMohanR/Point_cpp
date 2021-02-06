#ifndef __POINT_H
#define __POINT_H
#include<iostream>
enum Quadrant {
  Q1,
  Q2,
  Q3,
  Q4
};

class Point {
  int x;
  int y;
  public:
  Point();
  Point(int,int);
  Point(const Point&);
  double distanceFromOrigin()  const;
  Quadrant quadrant() const;
  bool isOrigin() const;
  bool isOnXAxis() const;
  bool isOnYAxis() const;
  void display() const;
};

#endif