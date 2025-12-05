#ifndef EQUIPODEDEPORTES_H
#define EQUIPODEDEPORTES_H

#include "Deportista.h"
#include <vector>
using namespace std;

class EquipoDeDeportes {
private:
    vector<Deportista*> lista;

public:
    void agregar(Deportista* d);
    void mostrarTodos();
};

#endif