#include "P5-Centro.h"

int main() {
    Point2D punto1(5, 5), centro(3.5, 3.5), punto2(20, 8.123);
    Circulo circ(centro, 10, "amarillo");

    circ.print();
    std::cout << std::endl;
    
    std::cout << "Su area es: " << circ.area();

    std::cout << " y de perimetro " << circ.perimetro();
    std::cout << std::endl;

    std::cout << "El punto ";
    punto1.show();
    if (circ.esInterior(punto1)) 
        std::cout << " esta dentro del circulo" << std::endl;
    else    
        std::cout << " no esta dentro del circulo" << std::endl;

    std::cout << "El punto ";
    punto2.show();
    if (circ.esInterior(punto2)) 
        std::cout << " esta dentro del circulo" << std::endl;
    else    
        std::cout << " no esta dentro del circulo" << std::endl;

}
