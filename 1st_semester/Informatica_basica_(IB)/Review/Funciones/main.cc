#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include "Suma.h"

int main() {
    std::cout << " -------------------- SUMA -------------------- " << std::endl;
    int sumador = suma1(1, 4);
    std::cout << sumador << std::endl;

    std::cout << " -------------------- TRIANGULO -------------------- " << std::endl;
    //std::cout << " Inserta el lado 1, 2 y 3 de un triangulo: ";
    //int lado_1, lado_2, lado_3;
    //std::cin >> lado_1 >> lado_2 >> lado_3;
    triangulo(1, 3, 3);
    std::cout << std::endl;

    std::cout << " -------------------- DIVISORES -------------------- " << std::endl;
    //std::cout << "Inserta numero: ";
    //int disidable;
    //std::cin >> disidable;
    for (int i = 0; i < divisores(10).size(); i++) {
        std::cout << divisores(10)[i] << ' ';
    }
    std::cout << std::endl;

    std::cout << " -------------------- INVERSOR -------------------- " << std::endl;
    //std::string word;
    //std::cin >> word;
    for (int i = 0; i < inversor("13579").size(); i++) {
        std::cout << inversor("13579")[i];
    }
    std::cout << std::endl;

    std::cout << " -------------------- EUCLIDES -------------------- " << std::endl;
    std::cout << MCD(100, 28);
    std::cout << std::endl;

    std::cout << " -------------------- MAX/MIN -------------------- " << std::endl;
    int n = 422386;
    std::cout << "El mayor de " << n << " es: " << max(n) << " y el menor es: " << min(n);
    std::cout << std::endl; 

    std::cout << " -------------------- CONTADOR_VOCAL -------------------- " << std::endl;
    std::string word = "Aguacate";
    std::cout << "La word es: " << word << " y tiene " << counter(word) << " vocales ";
    std::cout << std::endl; 

    std::cout << " -------------------- CONTADOR_VOCAL_RECURSIVO -------------------- " << std::endl;
    std::string word2 = "madreee";
    int sumadita{0};
    std::cout << "La word es: " << word2 << " y tiene " << recursivo(word2, 0, 0, sumadita) << " vocales ";
    std::cout << std::endl; 

    std::cout << " -------------------- BIN_DEC -------------------- " << std::endl;
    int bin = 11110111;
    std::cout << bin_dec(bin);
    std::cout << std::endl; 

    std::cout << " -------------------- BIN_DEC_REC -------------------- " << std::endl;
    int bin2 = 1010, sumador_bin{0};
    std::cout << bin_dec_rec(bin2, sumador_bin, 1);
    std::cout << std::endl; 
    

    return 0;
}
