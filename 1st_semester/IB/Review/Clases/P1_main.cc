#include <iostream>
#include <string>
#include "P1_Book.h"

int main(int argc, char *argv[]) {
  
  if (argc != 2) {
    std::cerr << "Esta mal";
    return -1;
  }
	
  Book libro1("El Quijote", 1605, 21.00, atoi(argv[1]));
  Book libro2;
  std::cin >> libro2;
  std::cout << libro1 << '\n' << libro2;


  return 0;
}
