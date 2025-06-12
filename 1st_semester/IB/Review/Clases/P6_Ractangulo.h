#ifndef RECTANGULO
#define RECTANGULO

#include <iostream>

class Rectangulo {
  public:
    // Constructores
    Rectangulo();
    Rectangulo(const double base, const double altura);

    // Getters
    double getBase() const;
    double getAltura() const;

    //Setters
    void setBase(const double new_base);
    void setAltura(const double new_altura);

    // Sobrecarga
    friend std::ostream& operator<<(std::ostream& os, const Rectangulo& rect);

    // Método
    double area() const;
    bool esCuadrado() const;

  private:
    double base_;
    double altura_;
};

class Caja {
  public:
    // Constructores
    Caja();
    Caja(const Rectangulo base, const double profundidad);

    // Getters
    Rectangulo getBase() const;
    double getProfundidad() const;

    // Setters
    void setBase(const Rectangulo new_base);
    void setProfundidades(const double new_profundidad);

    // Sobrecarga
    friend std::ostream& operator<<(std::ostream& os, const Caja& cajitota);

    // Metodo
    double volumen() const;
    bool esCubo() const;

  private:
    Rectangulo base_;
    double profundidad_;
};

#endif //RECTANGULO