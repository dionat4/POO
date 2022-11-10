#pragma once
#include <iostream>
#include <string>
#include "veiculo.h"

using namespace std;

class VeiculoTerrestre: public Veiculo{
    private:
        int Ano;
        float Valor;
        string Modelo;
    public:
        VeiculoTerrestre(float Peso, float VelMax, float Preco, int Ano, float Valor, string Modelo);
        int getAno();
        void setAno(int Ano);
        float getValor();
        void setValor(float Valor);
        string getModelo();
        void setModelo(string Modelo);

        void printVeiculoTerrestre();
};