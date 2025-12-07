#ifndef BASQUETBOLISTA_H
#define BASQUETBOLISTA_H

#include "Deportista.h"

class Basquetbolista : public Deportista {
private:
    int altura;

public:
    Basquetbolista(std::string n, int e, int h, int i);  // con edad

    int getAltura();
    void setAltura(int h);

    void mostrarInfo();
    void lanzarTriple();
};

#endif