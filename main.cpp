#include <iostream>
using namespace std;

#include "Futbolista.h"
#include "Basquetbolista.h"
#include "Nadador.h"

int main() {
    cout << "=== Proyecto Deportistas ===" << endl << endl;

    Futbolista f("Ana", 20, "Portera");
    Basquetbolista b("Luis", 198);
    Nadador n("Maria", "Libre");

    f.mostrarInfo();
    f.atajar();

    cout << endl;

    b.mostrarInfo();
    b.lanzarTriple();

    cout << endl;

    n.mostrarInfo();
    n.nadar();

    return 0;
} 