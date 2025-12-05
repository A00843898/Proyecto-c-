#include "Basquetbolista.h"
#include <iostream>
using namespace std;

// sin edad
Basquetbolista::Basquetbolista(string n, int h)
    : Deportista(n, 0)
{
    altura = h;
}

// con edad
Basquetbolista::Basquetbolista(string n, int e, int h)
    : Deportista(n, e)
{
    altura = h;
}

int Basquetbolista::getAltura() { return altura; }
void Basquetbolista::setAltura(int h) { altura = h; }

void Basquetbolista::mostrarInfo() {
    cout << "Basquetbolista: " << nombre
         << ", Edad: " << edad
         << ", Altura: " << altura << " cm" << endl;
}

void Basquetbolista::lanzarTriple() {
    cout << nombre << " lanzó un triple." << endl;
} 