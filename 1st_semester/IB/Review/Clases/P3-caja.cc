#include "P3-caja.h"

// Constructores
Caja::Caja() : largo_(1.0), ancho_(1.0), alto_(1.0), material_("genérico") {}
Caja::Caja(const double largo_, const double ancho_, const double alto_, const std::string material_) : 
            largo_(largo_), ancho_(ancho_), alto_(alto_), material_(material_) {}

// Getters
double Caja::getLargo() const  { return largo_; }
double Caja::getAncho() const { return ancho_; }
double Caja::getAlto() const { return alto_; }
std::string Caja::getMaterial() const { return material_; }

// Setters
void Caja::setLargo( const double new_largo) { largo_ = new_largo; }
void Caja::setAlto( const double new_alto) { alto_ = new_alto; }
void Caja::setAncho( const double new_ancho) { ancho_ = new_ancho; }
void Caja::setMaterial( const std::string new_material) { material_ = new_material; }

// Metodos
bool Caja::esApilable(const Caja& otro) const {

}

double Caja::volumen() const {
  return alto_ * largo_ * ancho_;
}

// Sobrecargas
std::ostream& operator<<(std::ostream& os, const Caja& box) {
  os << '[' << box.largo_ << 'x' << box.ancho_ << 'x' << box.alto_ << "] - " << box.material_;
  return os; 
} 

Caja operator+(const Caja& box1, const Caja& box2) {
  return Caja(box1.largo_ + box2.largo_, box1.ancho_ + box2.ancho_, box1.alto_ + box2.alto_, "mezcla");
}