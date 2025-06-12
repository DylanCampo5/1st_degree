#include "P6_Ractangulo.h"

int main() {
  Rectangulo recta1(10, 10), recta2(5, 20);
  Caja caja1(recta2, 20), caja2(recta1, 10);

  std::cout << "Recta 1 " << recta1 << " y recta 2 " << recta2 << std::endl;
  std::cout << "Caja 1 " << caja1 << " y Caja 2 " << caja2 << std::endl;

  std::cout << "Volumen de caja 1 y 2 es:   " << caja1.volumen() << ',' << caja2.volumen() << std::endl;
  std::cout << "Area del cuadrado 1 y 2 es:   " << recta1.area() << ',' << recta2.area() << std::endl;

  std::cout << "El rectangulo 1 es cuadrados?:   ";
  if (recta1.esCuadrado()) 
    std::cout << "Si tontin" << std::endl;
  else 
    std::cout << "No mono" << std::endl;

  std::cout << "La caja 1 es un cubo?:   ";
  if (caja1.esCubo()) 
    std::cout << "Si tontin" << std::endl;
  else 
    std::cout << "No mono" << std::endl;

  std::cout << "Y la segunda caja?:   ";
  if (caja2.esCubo()) 
    std::cout << "Si tontin" << std::endl;
  else 
    std::cout << "No mono" << std::endl;

  return 0;
}