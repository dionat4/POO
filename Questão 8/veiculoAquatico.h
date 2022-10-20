#pragma once
#include <iostream>
#include <string>

using namespace std; 

#include "veiculo.h"

class veiculoAquatico: public Veiculo {
private:
    int Ano;
    float Valor; 
    string Modelo;
public: 
    veiculoAquatico(float Peso, float VelMax, float Preco, int Ano, float Valor, string Modelo);
    int getAno();
    void setAno(int Ano);

    float getValor();
    void setValor(float Valor);

    string getModelo();
    void setModelo(string Modelo);

    void printAquatico();

};

    