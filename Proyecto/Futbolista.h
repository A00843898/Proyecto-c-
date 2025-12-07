#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H

#include "Deportista.h"
#include <string>

class Futbolista : public Deportista {
private:
    std::string posicion;

public:
    Futbolista(std::string n, int e, std::string p, int i);

    std::string getPosicion();
    void setPosicion(std::string p);

    void mostrarInfo();
    void entrenar();
};

#endif