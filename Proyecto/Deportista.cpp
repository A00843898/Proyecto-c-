#include "Deportista.h"
#include <iostream>
using namespace std;

Deportista::Deportista() {
    id = 0;
    nombre = "";
    edad = 0;
}

Deportista::Deportista(int i, string n, int e) {
    id = i;
    nombre = n;
    edad = e;
}

int Deportista::getId(){ return id; }
string Deportista::getNombre() { return nombre; }
int Deportista::getEdad() { return edad; }

void Deportista::setId(int i) { id = i; }
void Deportista::setNombre(string n) { nombre = n; }
void Deportista::setEdad(int e) { edad = e; }

void Deportista::mostrarInfo() {
    cout << "Deportista: " << nombre
         << ", Edad: " << edad
         << ", ID: " << id << endl;
}
