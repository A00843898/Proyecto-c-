#ifndef NADADOR_H
#define NADADOR_H

#include <string>
using namespace std;

class Nadador {
private:
    string nombre;
    string estilo;

public:
    Nadador(string n, string e);

    string getNombre();
    string getEstilo();

    void mostrarInfo();
    void nadar();
};

#endif