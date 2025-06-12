#include "P5-Centro.h"

Point2D::Point2D() : x_(0.0), y_(0.0) {}
Point2D::Point2D(const double x_, const double y_) : x_(x_), y_(y_) {}

double Point2D::getX() const {return x_;}
double Point2D::getY() const {return y_;}

void Point2D::setX(const double new_x) {x_ = new_x;}
void Point2D::setY(const double new_y) {y_ = new_y;}

std::istream& operator>>(std::istream& is, Point2D& punto) {
    is >> punto.x_ >> punto.y_;
    return is;
}

//punto1.show()
//this = punto1
void Point2D::show() {
    std::cout << '(' << x_ << ',' << this->y_ << ')';
}

Point2D Point2D::move() {
    Point2D nuevo_punto;
    std::cin >> nuevo_punto;
    return nuevo_punto;
}

//punto1.distance(punto2)
double Point2D::distance(Point2D& punto_2) {
    return (sqrt(pow(punto_2.x_ - this->x_, 2) + pow(punto_2.y_ - this->y_, 2)));
}

Point2D Point2D::middle(Point2D& punto_2) {
    return Point2D((punto_2.x_ + this->x_)/ 2, (punto_2.y_ + this->y_) / 2);
}



// Clase Circulo
Circulo::Circulo() : centro_(0.0, 0.0), radio_(1.0), color_("verde esmeralda") {}
Circulo::Circulo(const Point2D centro_, const double radio_, const std::string color_) : 
                    centro_(centro_), radio_(radio_), color_(color_) {}

double Circulo::area() {
    return kPI * pow(this->radio_, 2);
}

double Circulo::perimetro() {
    return 2 * (kPI * this->radio_);
}

void Circulo::print() {
    std::cout << "Circulo de centro (";
    centro_.show();
    std::cout << ") y diametro " << 2*radio_ << " de color " << color_;
}

bool Circulo::esInterior(const Point2D punto) {
    return ( ( sqrt( (pow(punto.getX() - this->centro_.getX(), 2)) + 
            (pow(punto.getY() - this->centro_.getY(), 2)) ) ) <=  this->radio_);
}