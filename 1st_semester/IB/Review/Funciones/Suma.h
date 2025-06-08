#ifndef SUMA_H
#define SUMA_H

#include <iostream>
#include <vector>
#include <string>
#include <tuple>

int suma1(int n1, int n2);

void triangulo(const int, const int, const int);

std::vector<int> divisores(int);

std::vector<char> inversor(const std::string);

int MCD(const int, const int);

int max(int);
int min(int);

int counter(const std::string);

int recursivo(std::string, int, int, int&);

int bin_dec(int);

int bin_dec_rec(int, int, int);

#endif // SUMA_H
