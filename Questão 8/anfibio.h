#pragma once
#include <iostream>
#include <string>
#include "veiculoAquatico.h"
#include "veiculoterrestre.h"

using namespace std; 


class veiculoAnfibio: public VeiculoTerrestre, public veiculoAquatico {
private:
    int Ano;
    float Valor; 
    string Cor;

public: 
    veiculoAnfibio(float Peso, float VelMax, float Preco, int Ano, float Valor, string Modelo, string Cor);
    int getAno();
    void setAno(int Ano);

    float getValor();
    void setValor(float Valor);

    string getCor();
    void setCor(string Cor);

    void printAnfibio();
};

