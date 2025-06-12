#include "P4-Point2D.h"

int main() {
    Point2D punto1(1.0, 1.0), punto2(2.0, 2.0);
    std::cout << "Primer punto: ";
    punto1.show();
    std::cout << "Segundo punto: ";
    punto2.show();

    std::cout << "Punto 1 ahora es: ";
    punto1.move();
    std::cout << "Nuevo punto 1: ";
    punto1.show();

    std::cout << "La distancia entre 1 y 2 es: " << punto1.distance(punto2) << std::endl;

    std::cout << "La mitad entre ambos puntos es: ";
    (punto1.middle(punto2)).show();

    return 0;
}