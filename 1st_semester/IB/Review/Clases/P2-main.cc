#include "P2-Complejos.h"

int main() {
  Complejos c1(68.04, 0.0);
  Complejos c2(56.62, -21.12);
  std::cout << c1 << " " << c2 << std::endl;

  std::cout << "Suma: " << c1 + c2 << std::endl;
  std::cout << "Resta: " << c1 - c2 << std::endl;
  std::cout << "Mul: " << c1 * c2 << std::endl;
  std::cout << "Div: " << c1 / c2 << std::endl;


  return 0;
}