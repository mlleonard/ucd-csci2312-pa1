// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point {

private:
    double x;
    double y;

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y);    // two-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);

    // Accessor methods
    double getX();
    double getY();

    // Distance between
    double distanceTo(Point&);
};

#endif // __point_h_point_h