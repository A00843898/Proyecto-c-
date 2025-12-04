#include <iostream>
#include "Futbolista.h"
#include "Basquetbolista.h"
#include "Nadador.h"
#include "EquipoDeDeportes.h"

using namespace std;

int main() {

    EquipoDeDeportes equipo;

    Futbolista f1("Luis", 20, "Portero");
    Basquetbolista b1("Carlos", 21, 198);
    Nadador n1("Ana", 19, "Mariposa");

    equipo.agregar(&f1);
    equipo.agregar(&b1);
    equipo.agregar(&n1);

    equipo.mostrarTodos();

    return 0;
} 