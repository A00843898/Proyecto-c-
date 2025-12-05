#include "EquipoDeDeportes.h"
#include <iostream>
using namespace std;

void EquipoDeDeportes::agregar(Deportista* d) {
    lista.push_back(d);
}

void EquipoDeDeportes::mostrarTodos() {
    cout << "--- Equipo ---" << endl;
    for (Deportista* d : lista) {
        d->mostrarInfo(); 
    }
}