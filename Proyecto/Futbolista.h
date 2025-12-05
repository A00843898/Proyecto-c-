#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H

#include "Deportista.h"
#include <string>
using namespace std;

class Futbolista : public Deportista {
private:
    string posicion;

public:
    Futbolista(string n, int e, string p);

    string getPosicion();
    void setPosicion(string p);

    void mostrarInfo();
    void entrenar();
};

#endif