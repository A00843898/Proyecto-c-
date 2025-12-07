#ifndef NADADOR_H
#define NADADOR_H

#include "Deportista.h"

class Nadador : public Deportista {
private:
    std::string estilo;

public:
    Nadador(std::string n, int e, std::string est, int i);  

    std::string getEstilo();
    void setEstilo(std::string est);

    void mostrarInfo();
    void nadar();
};

#endif