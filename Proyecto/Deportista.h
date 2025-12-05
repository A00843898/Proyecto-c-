#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <string>
using namespace std;

class Deportista {
protected:
    string nombre;
    int edad;

public:
    Deportista(string n, int e);

    string getNombre();
    int getEdad();

    void setNombre(string n);
    void setEdad(int e);

    virtual void mostrarInfo();
};

#endif