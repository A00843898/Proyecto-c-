#include "Nadador.h"
#include <iostream>
using namespace std;

// sin edad
Nadador::Nadador(string n, string est)
    : Deportista(n, 0)
{
    estilo = est;
}

// con edad
Nadador::Nadador(string n, int e, string est)
    : Deportista(n, e)
{
    estilo = est;
}

string Nadador::getEstilo() { return estilo; }
void Nadador::setEstilo(string est) { estilo = est; }

void Nadador::mostrarInfo() {
    cout << "Nadador: " << nombre
         << ", Edad: " << edad
         << ", Estilo: " << estilo << endl;
}

void Nadador::nadar() {
    cout << nombre << " está nadando estilo " << estilo << "." << endl;
}