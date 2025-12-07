#include "Nadador.h"
#include <iostream>
using namespace std;


Nadador::Nadador(string n, int e, string est, int i)
    : Deportista(i, n, e)
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