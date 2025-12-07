#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <string>

class Deportista {
protected:
    int id;
    std::string nombre;
    int edad;

public:
    Deportista();                                   // por defecto
    Deportista(int i, std::string n, int e);        // con ID

    int getId();
    std::string getNombre();
    int getEdad();

    void setId(int i);
    void setNombre(std::string n);
    void setEdad(int e);

    virtual void mostrarInfo();
};

#endif
