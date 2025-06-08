#ifndef P1_BOOK
#define P1_BOOK

#include <iostream>
#include <string>

class Book {
  public:
    // No se que por defecto
    Book();

    // No se que por parametro
    Book(std::string title_, int age_, int cost_, double impuesto_);

    // Getters
    // ME OLVIDE PONER EL CONST
    std::string getTitle() const;
    int getAge() const;
    double getCost() const;
    double getImpuesto() const;

    // Setters
    // NO SE PONEN RETURN Y SON TIPO VOID SIEMPRE
    // NO LO PASE POR REFERENCIA NI PUSE CONST
    void setTitle( const std::string& new_title ); 
    void setAge( const int& new_age );
    void setCost( const double& new_cost );
    void setImpuesto( const double& new_imp );

    friend std::ostream& operator<<(std::ostream& os, const Book& libro);
    friend std::istream& operator>>(std::istream& is, Book& libro);

    double precioImpuesto() const;


  private:
    std::string title_;
    int age_;
    double cost_;
    double impuesto_;
};


#endif // P1_BOOK
