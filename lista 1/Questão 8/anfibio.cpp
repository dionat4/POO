#include <iostream>
#include <string>
#include "anfibio.h"

using namespace std; 

veiculoAnfibio::veiculoAnfibio(float Peso, float VelMax, float Preco, int Ano, float Valor, string Modelo, string Cor)
:VeiculoTerrestre(Peso, VelMax, Preco, Ano, Valor, Modelo), veiculoAquatico(Peso, VelMax, Preco, Ano, Valor, Modelo) {
    this -> Ano = Ano;
    this -> Valor = Valor;
    this -> Cor = Cor;

}

    int veiculoAnfibio::getAno() {
        return Ano;
    }
    void veiculoAnfibio::setAno(int Ano) {
        this -> Ano = Ano; 
    }

    float veiculoAnfibio::getValor() {
        return Valor;
    }
    void veiculoAnfibio::setValor(float Valor) {
        this -> Valor = Valor; 
    }

    string veiculoAnfibio:: getCor() {
        return Cor;
    }
    void veiculoAnfibio::setCor(string Cor) {
        this -> Cor = Cor;
    }

    void veiculoAnfibio::printAnfibio() {
        cout << "Ano: " << getAno() << endl;
        cout << "Valor: " << getValor() << endl;
        cout << "Cor do Veiculo: " << getCor() << endl;

    }