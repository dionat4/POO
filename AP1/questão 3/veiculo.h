#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
#include <string>

using namespace std;

class Veiculo{
    private: 
        string nome;
        double peso;
        double potencia;
    public:
        Veiculo(string nome, double peso, double potencia);

        void setPeso(double peso);
        double getPeso();
        void setPotencia(double potencia);
        double getPotencia();

        void print();
};

#endif