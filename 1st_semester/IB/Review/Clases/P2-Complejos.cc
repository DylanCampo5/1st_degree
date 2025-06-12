#include <cmath>
#include "P2-Complejos.h"

Complejos::Complejos() : entero_(0.0), complejo_(0.0) {}
Complejos::Complejos(double entero_, double complejo_) : entero_(entero_), complejo_(complejo_) {}

double Complejos::getEntero() const { return entero_; }
double Complejos::getComplejo() const { return complejo_; }

void Complejos::setEntero(const double new_entero) { entero_ = new_entero; }
void Complejos::setComplejo(const double new_complejo) { complejo_ = new_complejo; }

std::ostream& operator<< (std::ostream& os, const Complejos complex) {
  os << '(' << complex.entero_ << ", " << complex.complejo_ << ')';
  return os;
}

std::istream& operator>> (std::istream& is, Complejos complex) {
  is >> complex.entero_ >> complex.complejo_;
  return is;
}

Complejos operator+(const Complejos& n1, const Complejos& n2) {
  return Complejos(n1.entero_ + n2.entero_, n1.complejo_ + n2.complejo_);
}

Complejos operator-(const Complejos& n1, const Complejos& n2) {
  return Complejos(n1.entero_ - n2.entero_, n1.complejo_ - n2.complejo_);
}

Complejos operator/(const Complejos& n1, const Complejos& n2) {
  return Complejos(((n1.entero_ * n2.entero_ + n1.complejo_ * n2.complejo_) / pow(2, n2.entero_) + pow(2, n1.complejo_)), 
                    ((n1.complejo_ * n2.entero_ - n1.entero_ * n2.complejo_) / pow(2, n2.entero_) + pow(2, n1.complejo_)));
}

Complejos operator*(const Complejos& n1, const Complejos& n2) {
  return Complejos((n1.entero_ * n2.entero_ - n1.complejo_ * n2.complejo_), 
                   (n1.entero_ * n2.complejo_  + n1.complejo_ * n2.entero_));
}
