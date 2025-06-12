#include "P3-caja.h"

int main() {
  Caja box1(9.8, 7.1, 6, "Metal"), box2(10, 12.3, 4, "Plastico"), box3(15, 3, 5, "");

  std::cout << box1 << '\n' << box2 << '\n' << box3 << '\n';
  std::cout << '\n' << box2 + box3;  

  return 0;
}