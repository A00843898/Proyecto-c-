#ifndef EQUIPODEDEPORTES_H
#define EQUIPODEDEPORTES_H

#include "Deportista.h"
#include <vector>

class EquipoDeDeportes {
private:
    std::vector<Deportista> lista;

public:
    void agregar(Deportista d);
    void mostrarTodos();
    int buscarPosicionPorId(int id); 
    void mostrarDeportistaPorId(int id);
};

#endif