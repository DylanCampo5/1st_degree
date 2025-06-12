#include "P6_Ractangulo.h"

// Constructores
Rectangulo::Rectangulo() : base_(1.0), altura_(1.9) {}
Rectangulo::Rectangulo(const double base, const double altura) : base_(base), altura_(altura) {}

// Getters
double Rectangulo::getBase() const { return base_; }
double Rectangulo::getAltura() const { return altura_; }

//Setters
void Rectangulo::setBase(const double new_base) { base_ = new_base; }
void Rectangulo::setAltura(const double new_altura) { altura_ = new_altura; }

// Sobrecarga
std::ostream& operator<<(std::ostream& os, const Rectangulo& rect) {
  os << "(" << rect.base_ << "," << rect.altura_ << ')';
  return os;
}

// Método
double Rectangulo::area() const {
  return base_ * altura_;
}
bool Rectangulo::esCuadrado() const {
  return (base_ == altura_) ? 1 : 0;
}



Caja::Caja() : base_(1.0, 1.0), profundidad_(1.0) {}
Caja::Caja(const Rectangulo base, const double profundidad) : base_(base), profundidad_(profundidad) {}

// Getters
Rectangulo Caja::getBase() const { return base_; }
double Caja::getProfundidad() const { return profundidad_; }

// Setters
void Caja::setBase(const Rectangulo new_base) { base_ = new_base; }
void Caja::setProfundidades(const double new_profundidad) { profundidad_ = new_profundidad; }

// Sobrecarga
std::ostream& operator<<(std::ostream& os, const Caja& cajitota) {
  os << "(" << cajitota.base_.getBase() << "," << cajitota.profundidad_ << "," << cajitota.base_.getAltura() << ')';
  return os;
}

// Metodo
double Caja::volumen() const {
  return base_.getBase() * profundidad_ * base_.getAltura();
}
bool Caja::esCubo() const {
  return (base_.getBase() == profundidad_ && profundidad_ == base_.getAltura()) ? 1 : 0;
}