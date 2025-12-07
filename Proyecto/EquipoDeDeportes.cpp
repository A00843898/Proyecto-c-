#include "EquipoDeDeportes.h"
#include <iostream>
using namespace std;

void EquipoDeDeportes::agregar(Deportista d) {
    if (buscarPosicionPorId(d.getId()) != -1) {
        cout << "Ya existe un deportista con el ID "
             << d.getId() << " en el equipo." << endl;
    } else {
        lista.push_back(d);
    }
}

void EquipoDeDeportes::mostrarTodos() {
    if (lista.size() == 0) {
        cout << "No hay deportistas registrados en el equipo." << endl;
        return;
    }

    cout << "--- Lista de deportistas del equipo ---" << endl;
    cout << "Total: " << lista.size() << endl;

    for (int i = 0; i < lista.size(); i++) {
        cout << "Deportista #" << (i + 1) << endl;
        cout << "  ID:     " << lista[i].getId() << endl;
        cout << "  Nombre: " << lista[i].getNombre() << endl;
        cout << "  Edad:   " << lista[i].getEdad() << endl;
        cout << "----------------------------------------" << endl;
    }
}

int EquipoDeDeportes::buscarPosicionPorId(int id) {
    for (int i = 0; i < lista.size(); i++) {
        if (lista[i].getId() == id) {
            return i;
        }
    }
    return -1;
}

void EquipoDeDeportes::mostrarDeportistaPorId(int id) {
    int pos = buscarPosicionPorId(id);
    if (pos != -1) {
        cout << "Datos del deportista con ID " << id << ":" << endl;
        lista[pos].mostrarInfo();
    } else {
        cout << "No existe un deportista con el ID " << id << endl;
    }
}
