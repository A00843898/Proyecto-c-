#ifndef NADADOR_H
#define NADADOR_H

#include "Deportista.h"
using namespace std;

class Nadador : public Deportista {
private:
    string estilo;

public:
    Nadador(string n, string est);         // sin edad
    Nadador(string n, int e, string est);  // con edad

    string getEstilo();
    void setEstilo(string est);

    void mostrarInfo();
    void nadar();
};

#endif