#ifndef BASQUETBOLISTA_H
#define BASQUETBOLISTA_H

#include <string>
using namespace std;

class Basquetbolista {
private:
    string nombre;
    int altura;

public:
    Basquetbolista(string n, int h);

    string getNombre();
    int getAltura();

    void mostrarInfo();
    void lanzarTriple();
};

#endif 