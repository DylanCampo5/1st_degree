// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html
// COMPILACIÓN: g++ -g rational_t.cpp main_p2.cpp -o main_p2

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include <iostream>
#include <cmath>
#include <fstream>

// pauta de estilo [41]: ficheros de cabecera agrupados y separados
#include "rational_t.hpp"

#include "vector_t.hpp"

#include "matrix_t.hpp"

using namespace std;

int main()
{

  std::ifstream file("data.txt");
  if (file.is_open()) {
      std::cin.rdbuf(file.rdbuf()); // Redirige std::cin al archivo
  }

  rational_t a(1, 2), b(3);

  // FASE I
  cout << "a + b: ";
  (a+b).write();

  cout << "b - a: ";
  (b-a).write();

  cout << "a * b: ";
  (a*b).write();
  
  cout << "a / b: ";
  (a/b).write();
  
  cout << endl;
  
  // FASE II
  vector_t<double> v, w;
  v.read(), v.write();
  w.read(), w.write();
  
  cout << "Producto escalar de vector_t<double>: " << scal_prod(v, w) << endl << endl;
  
  vector_t<rational_t> x, y;
  x.read(), x.write();
  y.read(), y.write();
  
  cout << "Producto escalar de vector_t<rational_t>: " << scal_prod(x, y) << endl << endl;
  
  
  // FASE III
  matrix_t<double> A, B, C, D, E, Y, Z;
  cout << "A: ";
  A.read(), A.write();
  cout << "B: ";
  B.read(), B.write();
  cout << "Y: ";
  Y.read(), Y.write();
  cout << "Z: ";
  Z.read(), Z.write();
  
  cout << "Multiplicación de matrices A y B: " << endl;
  C.multiply(A, B);
  C.write();
  
  cout << "Suma de las matrices Y y Z: " << endl;
  D.sum_mat(Y, Z);
  D.write();

  cout << "La diagonal principal de Z es: " << endl;
  E.diagonal_prin(Z);
  E.write();

  return 0;
}