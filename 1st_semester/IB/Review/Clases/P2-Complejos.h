#ifndef P2-COMPLEJOS
#define P2-COMPLEJOS

#include <iostream>
#include <cmath>

class Complejos {
  public:
    Complejos();
    Complejos(double entero_, double complejo_);

    double getEntero() const;
    double getComplejo() const;

    void setEntero(const double new_entero);
    void setComplejo(const double new_complejo);

    friend std::ostream& operator<< (std::ostream& os, const Complejos complex);
    friend std::istream& operator>> (std::istream& is, Complejos complex);

    friend Complejos operator+(const Complejos& n1, const Complejos& n2);
    friend Complejos operator-(const Complejos& n1, const Complejos& n2);
    friend Complejos operator*(const Complejos& n1, const Complejos& n2);
    friend Complejos operator/(const Complejos& n1, const Complejos& n2);

  private:
    double entero_;
    double complejo_;
};

#endif //P2-COMPLEJOS