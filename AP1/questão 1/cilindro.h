#ifndef CILINDRO_H
#define CILINDRO_H
#include "retangulo.h"
#include "circulo.h"

class Cilindro: public Retangulo, public Circulo{
    public:
        Cilindro() = default;
        Cilindro(double base, double altura, double raio);

        double calculaArea();
        double calculaVolume();

        void circuloprint();

};

#endif