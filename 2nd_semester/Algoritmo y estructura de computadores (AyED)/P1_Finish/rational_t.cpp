// AUTOR: Dylan Gonzalo Campo Bedoya
// FECHA: 
// EMAIL: alu0101657189@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include "rational_t.hpp"

rational_t::rational_t(const int n, const int d)
{
  assert(d != 0);
  num_ = n, den_ = d;
}

// pauta de estilo [87]: 3 líneas de separación entre métodos

// pauta de estilo [83]: tipo retornado en línea anterior al método
// método que nos da el numerador
double
rational_t::get_num() const
{
  return num_;
}



// método que nos da el denominador
double
rational_t::get_den() const
{
  return den_;
}


  
// método para establecer el numerador
void
rational_t::set_num(const int n)
{
  num_ = n;
}


  
// método para establecer el denominador
void
rational_t::set_den(const int d)
{
  assert(d != 0);
  den_ = d;
}



// método para poder devolver en formato num/den
double
rational_t::value() const
{ 
  return double(get_num()) / get_den();
}


// comparaciones

// método para comparar si son iguales o no
bool
rational_t::is_equal(const rational_t& r, const double precision) const
{ 
  return fabs(value() - r.value()) < precision;
}



// método para ver si a es mayor que b
bool
rational_t::is_greater(const rational_t& r, const double precision) const
{
  return (r.value() - value()) > precision; 
}



// método para ver si a es menor que b
bool
rational_t::is_less(const rational_t& r, const double precision) const
{
  return (r.value() - value()) < precision;
}



// método para comprobar si a es igual a 0
bool
rational_t::is_zero(const double precision) const
{
  return fabs(value()) < precision;
}


// operaciones

// método para hallar la suma de dos numeros racionales
rational_t
rational_t::add(const rational_t& r)
{
  double num = get_num() * r.get_den() + r.get_num() * get_den();
  double den = get_den() * r.get_den();
  return rational_t(num, den);
}



// método para hallar la resta de dos numeros racionales
rational_t
rational_t::substract(const rational_t& r)
{
  double num = get_num() * r.get_den() - r.get_num() * get_den();
  double den = get_den() * r.get_den();
  return rational_t(num, den);
}



// método para hallar la multiplicación de dos numeros racionales
rational_t
rational_t::multiply(const rational_t& r)
{
  double num = get_num() * r.get_num();
  double den = get_den() * r.get_den();
  return rational_t(num, den);
}



// método para hallar la división de dos numeros racionales
rational_t
rational_t::divide(const rational_t& r)
{
  double num = get_num() / r.get_num();
  double den = get_den() / r.get_den();
  return rational_t(num, den);
}



// E/S
void
rational_t::write(ostream& os) const
{
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}



void 
rational_t::read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}
