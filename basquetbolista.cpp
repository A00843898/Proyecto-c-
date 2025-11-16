#include "Basquetbolista.h"
#include <iostream>
using namespace std;

Basquetbolista::Basquetbolista(string n, int h) {
    nombre = n;
    altura = h;
}

string Basquetbolista::getNombre() { return nombre; }
int Basquetbolista::getAltura() { return altura; }

void Basquetbolista::mostrarInfo() {
    cout << "Basquetbolista: " << nombre 
         << ", Altura: " << altura << " cm" << endl;
}

void Basquetbolista::lanzarTriple() {
    cout << nombre << " lanzó un triple perfecto." << endl;
} 