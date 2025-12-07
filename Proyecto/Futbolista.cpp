#include "Futbolista.h"
#include <iostream>
using namespace std;

Futbolista::Futbolista(string n, int e, string p, int i)
    : Deportista(i, n, e) 
{
    posicion = p;
}

string Futbolista::getPosicion() { return posicion; }
void Futbolista::setPosicion(string p) { posicion = p; }

void Futbolista::mostrarInfo() {
    cout << "Futbolista: " << nombre
         << ", Edad: " << edad
         << ", Posicion: " << posicion << endl;
}

void Futbolista::entrenar() {
    cout << nombre << " está entrenando fútbol." << endl;
} 