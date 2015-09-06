//
// Created by Ivo Georgiev on 8/25/15.
//
#include <iostream>
#include "Point.h"
#include <cmath>
using namespace std;


double computeArea(Point&,Point&,Point&);

int main()
{
    double user_x;
    double user_y;
    double area;

    cout << "Please enter a series of 3 (x,y) points"<< endl;
    cout << "Point 1: \n";
    cin >> user_x;
    cin >> user_y;

    Point p1(user_x,user_y);

    cout << "Point 2: \n";
    cin >> user_x;
    cin >> user_y;

    Point p2(user_x, user_y);

    cout << "Point 3: \n";
    cin >> user_x;
    cin >> user_y;

    Point p3(user_x, user_y);

    cout << "The area of the triangle determined by those three points is" << endl;

    area = computeArea(p1,p2,p3);

    cout << area;


    return 0;
}


double computeArea(Point &a, Point &b, Point &c)
{
    double area;
    double length_a;
    double length_b;
    double length_c;
    double semi;        //SemiPerimeter of Herons Theorem
    double semiA, semiB, semiC;


    length_a = a.distanceTo(b);
    length_b = b.distanceTo(c);
    length_c = c.distanceTo(a);

    semi = ((length_a + length_b + length_c)/2);

    semiA = semi - length_a;
    semiB = semi - length_b;
    semiC = semi - length_c;


    area = sqrt(semi * semiA * semiB * semiC);


    return area;
}