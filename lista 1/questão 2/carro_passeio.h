#include <iostream>
#include <string>
#include "motor.h"

using namespace std;

class CarroPasseio: public Veiculo, Motor{
    private: 
        string Modelo;
        string Cor;

    public:
        CarroPasseio();
        CarroPasseio(float Peso, float VelMax, float Preco, int Cilindro, int Potencia, string Modelo, string Cor);
        string getModelo();
        void setModelo(string Modelo);
        string getCor();
        void setCor(string Cor);

        void printCarroPasseio();
};