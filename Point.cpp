#include "Point.h"
#include <cmath>
//#include "stdlib.h"

// Default constructor
// Initializes the point to (0.0, 0.0)
Point::Point() {
  x = 0.0;
  y = 0.0;
}

// Constructor
// Initializes the point to (initX, initY)
Point::Point(double initX, double initY) {
  x = initX;
  y = initY;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
  // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
  x = newX;
}

void Point::setY(double newY) {
  y = newY;
}

// Accessors
// Return the current values of private member variables

double Point::getX() {
  return x;
}

double Point::getY() {
  return y;
}

// Distance between
double Point::distanceTo(Point& secondPoint)
{

  double distance;
  double height;
  double length;
  double X2, Y2;

  Y2 = secondPoint.getY();
  height = std::abs(y-Y2);

  X2 = secondPoint.getX();
  length = std::abs(x-X2);

  distance = sqrt(pow(height,2) + pow(length,2));


  return distance;
};