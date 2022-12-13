#pragma once
#include <iostream>
#include <string>

using namespace std;

class Veiculo{
    private:
        float Peso;
        float VelMax;
        float Preco;
    public:
        Veiculo(float Peso, float VelMax, float Preco);
        float getPeso();
        void setPeso(float Peso);
        float getVelMax();
        void setVelMax(float VelMax);
        float getPreco();
        void setPreco(float Preco);

        void print();
};