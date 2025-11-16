#include "Futbolista.h"
#include <iostream>
using namespace std;

Futbolista::Futbolista(string n, int e, string p) {
    nombre = n;
    edad = e;
    posicion = p;
}

string Futbolista::getNombre() { return nombre; }
int Futbolista::getEdad() { return edad; }
string Futbolista::getPosicion() { return posicion; }

void Futbolista::setPosicion(string p) {
    posicion = p;
}

void Futbolista::mostrarInfo() {
    cout << "Futbolista: " << nombre << ", " << edad 
         << " años, Posición: " << posicion << endl;
}

void Futbolista::atajar() {
    cout << nombre << " realizó una atajada espectacular." << endl;
} 