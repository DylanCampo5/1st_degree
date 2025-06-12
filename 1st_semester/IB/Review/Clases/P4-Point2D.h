#ifndef P4-POINT2D
#define P4-POINT2D

#include <iostream>
#include <cmath>

class Point2D{
  public:
    Point2D();
    Point2D(const double x_, const double y_);

    double getX() const;
    double getY() const;

    void setX(const double new_x);
    void setY(const double new_y);

    friend std::istream& operator>>(std::istream& is, Point2D& punto);

    void show();
    Point2D move();
    double distance(Point2D& punto_2);
    Point2D middle(Point2D& punto_2);

  private:
    double x_;
    double y_;
};

#endif //P4-POINT2D