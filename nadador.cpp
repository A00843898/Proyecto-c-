#include "Nadador.h"
#include <iostream>
using namespace std;

Nadador::Nadador(string n, string e) {
    nombre = n;
    estilo = e;
}

string Nadador::getNombre() { return nombre; }
string Nadador::getEstilo() { return estilo; }

void Nadador::mostrarInfo() {
    cout << "Nadador: " << nombre << ", Estilo: " << estilo << endl;
}

void Nadador::nadar() {
    cout << nombre << " está nadando en estilo " << estilo << "." << endl;
} 