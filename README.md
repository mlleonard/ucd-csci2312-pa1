Description of 3d point Class:

I will be using c++ and the Clion enviornment to run my program

This is a 3-dimensional point class
All the coordinates are double-precison floating point

class Point {

// These private variables represent the x and y coordinates for each point
private:
  double x;
  double y;

public:
  Constructors
  Point();                      // default constructor
  Point(double x, double y);    // two-argument constructor

  Destructor
  ~Point();

  Mutator methods
  void setX(double newX);
  void setY(double newY);
  
  Accessor methods
  double getX();
  double getY(); 
  
  Distance between
  double distanceTo(Point&);
};

We can create an instance of out class anywhere in the rest of our code by calling one of these constructors we have defined.
    we can do this with
    Point myPoint:      //Which would call the default constructor Point::Point()
    or
    Point myPoint(5,3); //Which calls the two argument constructor Point::Point(double,double)
    
We may also use the member functions of the class to help us calculate the area of a 3D figure by calling to teh Distance between function
    which finds the distance between two points and acts as a "side" to our shape.
    

 