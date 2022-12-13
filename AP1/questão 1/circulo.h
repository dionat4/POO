#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo{
    private:
        double raio;
    public: 
        Circulo() = default;
        Circulo(double raio);

        void setRaio(double raio);
        double getRaio();

        double calculaArea();
        double calculaPerimetro();

        void circuloprint();
};

#endif