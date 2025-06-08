#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <tuple>
#include "Suma.h"

int suma1 (int n1, int n2) {
    return n1 + n2;
}

void triangulo (const int ld_1, const int ld_2, const int ld_3) {
    if (ld_1 == ld_2) {
        if (ld_1 == ld_3) 
            std::cout << "El triangulo es equilatero";
        else 
            std::cout << "El triangulo es isocele";
    } else if (ld_1 == ld_3) {
        if (ld_1 == ld_2) 
            std::cout << "El triangulo es equilatero";
        else 
            std::cout << "El triangulo es isocele";
    } else if (ld_2 == ld_3) {
        if (ld_2 == ld_1) 
            std::cout << "El triangulo es equilatero";
        else 
            std::cout << "El triangulo es isocele";
    } else {
        if ((ld_1 + ld_2 <= ld_3) || (ld_2 + ld_3 <= ld_1) || (ld_1 + ld_3 <= ld_2))
            std::cout << "Tu triangulo es una mierda gorda";
        else
            std::cout << "El triangulo es escaleno";    
    }
}

std::vector<int> divisores (int num) {
    std::vector<int> resultado;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            resultado.push_back(i);
        }
    }
    
    return resultado;
}

std::vector<char> inversor(const std::string num) {
    std::vector<char> resultado;
    for (int i = num.size() - 1; i >= 0; i--) {
        resultado.push_back(num[i]);
    }
    return resultado; 
}

int MCD(const int num1, const int num2) {
    if (num1 % num2 == 0)
        return num2;
    else {
        return MCD(num1, num1 % num2);
    }
}

int max(int num) {
    if(num / 10 == 0) {
        return num;
    } else {
        int resto = num % 10; 
        int mayor = max(num/10);
        if(resto >= mayor) {
            return resto;
        } else {
            return mayor;
        }
    }
}
int min(int num) {
    if(num / 10 == 0) {
        return num;
    } else {
        int resto = num % 10; 
        int menor = min(num/10);
        if(resto <= menor) {
            return resto;
        } else {
            return menor;
        }
    }
}

int counter(const std::string word) {
    int sumador{0}, minus{0}, mayus{0};
    
    std::vector<char> vocales_min = {'a','e','i','o','u'};
    std::vector<char> vocales_may = {'A','E','I','O','U'};
    
    for (int i = 0; i < word.size(); i++) {
        for (int j = 0; j < vocales_may.size(); j++) {
            if (word[i] == vocales_min[j])
                minus++;
            if (word[i] == vocales_may[j])
                mayus++;
        }
    }

    return (minus + mayus);
}

int recursivo(std::string word, int i, int j, int& sumador) {
    std::vector<char> vocales = {'a','e','i','o','u','A','E','I','O','U'};
    if(i >= word.size()) 
        return sumador;
    if (j >= vocales.size())
        return recursivo(word, i + 1, 0, sumador);
    
    if (word[i] == vocales[j]) {
        sumador++;
        return recursivo(word, i + 1, 0, sumador);
    }
    
    return recursivo(word, i, j + 1, sumador);
    
}

int bin_dec(int n) {
    int sumador{0}, i{1}, resto{0};
    while (n != 0) {
        resto = n % 10;
        n = n/10;
        sumador += resto * i;
        i = i*2;
    }
    return sumador;
}

int bin_dec_rec(int n, int sum, int i) {
    if (n == 0) {
        return 0;
    } else {
        sum = (n % 10) * i;
        return sum + bin_dec_rec(n / 10, sum, i * 2);
    }
}
