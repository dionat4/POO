#include <iostream>
#include <string>
#include "veiculoAquatico.h"

using namespace std;

veiculoAquatico::veiculoAquatico(float Peso, float VelMax, float Preco, int Ano, float Valor, string Modelo):Veiculo(Peso, VelMax, Preco){
    this -> Ano = Ano;
    this -> Valor = Valor;
    this -> Modelo = Modelo;

}

    int veiculoAquatico::getAno() {
        return Ano;
    }
    void veiculoAquatico::setAno(int Ano) {
        this -> Ano = Ano; 
    }

    float veiculoAquatico::getValor() {
        return Valor;
    }
    void veiculoAquatico::setValor(float Valor) {
        this -> Valor = Valor; 
    }

    string veiculoAquatico:: getModelo() {
        return Modelo;
    }
    void veiculoAquatico::setModelo(string Modelo) {
        this -> Modelo = Modelo;
    }

    void veiculoAquatico::printAquatico() {
        cout << "Ano: " << getAno() << endl;
        cout << "Valor: " << getValor() << endl;
        cout << "Modelo do Veiculo: " << getModelo() << endl;

    }