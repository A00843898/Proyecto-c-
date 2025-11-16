#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H

#include <string>
using namespace std;

class Futbolista {
private:
    string nombre;
    int edad;
    string posicion;

public:
    Futbolista(string n, int e, string p);

    string getNombre();
    int getEdad();
    string getPosicion();

    void setPosicion(string p);

    void mostrarInfo();
    void atajar(); 
};

#endif 