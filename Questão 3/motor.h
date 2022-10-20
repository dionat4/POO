#include <iostream>
#include <string>
#include "veiculo.h"

using namespace std;

class Motor: public Veiculo{
    private:
        int Cilindro;
        int Potencia;
    public:
        Motor();
        Motor(float Peso, float VelMax, float Preco, int Cilindro, int Potencia);
        int getCilindro();
        void setCilindro(int Cilindro);
        int getPotencia();
        void setPotencia(int Potencia);

        void printMotor();
};