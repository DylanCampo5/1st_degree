#ifndef P3-CAJA
#define P3-CAJA

#include <string>
#include <iostream>

class Caja {
  public:
    // Constructores
    Caja();
    Caja(const double largo_, const double ancho_, const double alto_, const std::string material_);

    // Getters
    double getLargo() const;
    double getAncho() const;
    double getAlto() const;
    std::string getMaterial() const;

    // Setters
    void setLargo(const double new_largo);
    void setAlto(const double new_alto);
    void setAncho(const double new_ancho);
    void setMaterial(const std::string new_material);

    // Métodos
    bool esApilable(const Caja& otro) const;
    double volumen() const;

    // Sobrecarga del operador << y el del +
    friend std::ostream& operator<<(std::ostream& os, const Caja& box);
    friend Caja operator+(const Caja& box1, const Caja& box2);

  private:
    double largo_;
    double ancho_;
    double alto_;
    std::string material_;
};

#endif //P3-CAJA