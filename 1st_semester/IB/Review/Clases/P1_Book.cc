#include "P1_Book.h"

// No se que por defecto
Book::Book() : title_(""), age_(0), cost_(0.0) {}

// No se que por parametro
Book::Book(std::string title_, int age_, int cost_, double impuesto_) : 
            title_(title_), age_(age_), cost_(cost_), impuesto_(impuesto_) {}

// Getters
// ME OLVIDE PONER EL CONST
std::string   Book::getTitle()    const { return title_; }
int           Book::getAge()      const { return age_; }
double        Book::getCost()     const { return cost_; }
double        Book::getImpuesto() const { return impuesto_; }

// Setters
// NO SE PONEN RETURN Y SON TIPO VOID SIEMPRE
// NO LO PASE POR REFERENCIA NI PUSE CONST
void Book::setTitle     ( const std::string& new_title ) { title_ = new_title; } 
void Book::setAge       ( const int& new_age )           { age_ = new_age; }
void Book::setCost      ( const double& new_cost )       { cost_ = new_cost; }
void Book::setImpuesto  ( const double& new_imp )        { impuesto_ = new_imp; }

double Book::precioImpuesto() const {
  return cost_ + (impuesto_ * cost_ / 100);
}

std::ostream& operator<<(std::ostream& os, const Book& libro) {
  os << libro.title_ << " " << libro.age_ << " " << libro.cost_ << ' ' << libro.precioImpuesto();
  return os;
}

std::istream& operator>>(std::istream& is, Book& libro) {
  is >> libro.title_ >> libro.age_ >> libro.cost_;
  return is;
}
