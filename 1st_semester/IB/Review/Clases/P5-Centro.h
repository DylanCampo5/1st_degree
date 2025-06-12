#ifndef P5-CENTRO
#define P5-CENTRO

#include <iostream>
#include <string>
#include <cmath>

const double kPI = 3.1415;

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

class Circulo{
    public:
        Circulo();
        Circulo(const Point2D centro_, const double radio_, const std::string color_);

        double area();
        double perimetro();
        void print();
        bool esInterior(const Point2D punto);

    private:
        Point2D centro_;
        double radio_;
        std::string color_;
};

#endif //P5-CENTRO