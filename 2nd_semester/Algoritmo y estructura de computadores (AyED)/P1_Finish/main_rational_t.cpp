// AUTOR: Dylan Gonzalo Campo Bedoya
// FECHA: 
// EMAIL: alu0101657189@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html
// COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include <iostream>
#include <cmath>

// pauta de estilo [41]: ficheros de cabecera agrupados y separados
#include "rational_t.hpp"

using namespace std;

int main()
{
  rational_t a(1, 2), b(3), c;

  cout << " ----- FASE I: Comprension:" << endl;
  cout << "a.value()= " << a.value() << endl;
  cout << "b.value()= " << b.value() << endl;
  cout << "c.value()= " << c.value() << endl;

  cout << "a: ";
  a.write();
  cout << "b: ";
  b.write();

  c.read();
  cout << "c: ";
  c.write();

  // FASE II
  cout << '\n' << " ----- FASE II: Comparaciones:" << endl;
  rational_t x(1, 3), y(2, 3), z;
  cout << "x: ";
  x.write();
  cout << "y: ";
  y.write();
  z.read();
  cout << "z: ";
  z.write();
  
  cout << "x == z? " << (x.is_equal(z) ? "true" : "false") << endl;
  cout << "x < z? " << (x.is_greater(z) ? "true" : "false") << endl;
  cout << "x > z? " << (x.is_less(z) ? "true" : "false") << endl;

  cout << "x == 0? " << (x.is_zero() ? "TRUE" : "FALSE") << endl;
  cout << "y == 0? " << (y.is_zero() ? "TRUE" : "FALSE") << endl;
  cout << "z == 0? " << (z.is_zero() ? "TRUE" : "FALSE") << endl;

  // FASE III
  cout << '\n' << " ----- FASE III: Operaciones:" << endl;
  cout << "a + b: ";
  a.add(b).write();
  
  cout << "b - a: ";
  b.substract(a).write();

  cout << "a * b: ";
  a.multiply(b).write();
  
  cout << "a / b: ";
  a.divide(b).write();
  
  return 0;
}