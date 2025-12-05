#include "Deportista.h"
#include <iostream>
using namespace std;

Deportista::Deportista(string n, int e) {
    nombre = n;
    edad = e;
}

string Deportista::getNombre() { return nombre; }
int Deportista::getEdad() { return edad; }

void Deportista::setNombre(string n) { nombre = n; }
void Deportista::setEdad(int e) { edad = e; }

void Deportista::mostrarInfo() {
    cout << "Deportista: " << nombre << ", Edad: " << edad << endl;
} 