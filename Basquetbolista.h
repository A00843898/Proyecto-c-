#ifndef BASQUETBOLISTA_H
#define BASQUETBOLISTA_H

#include "Deportista.h"
using namespace std;

class Basquetbolista : public Deportista {
private:
    int altura;

public:
    Basquetbolista(string n, int h);         // sin edad
    Basquetbolista(string n, int e, int h);  // con edad

    int getAltura();
    void setAltura(int h);

    void mostrarInfo();
    void lanzarTriple();
};

#endif