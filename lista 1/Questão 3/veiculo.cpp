#include <iostream>
#include <string>
#include "veiculo.h"

using namespace std;

Veiculo::Veiculo(){}
Veiculo::Veiculo(float Peso, float VelMax, float Preco){
    this -> Peso = Peso;
    this -> VelMax = VelMax;
    this -> Preco = Preco;
}

    float Veiculo::getPeso(){
        return Peso; 
    }
    void Veiculo::setPeso(float Peso){
        this -> Peso = Peso;
    }
    float Veiculo::getVelMax(){
        return VelMax;
    }
    void Veiculo::setVelMax(float VelMax){
        this -> VelMax = VelMax;
    }
    float Veiculo::getPreco(){
        return Preco;
    }
    void Veiculo::setPreco(float Preco){
        this -> Preco = Preco;
    }

void Veiculo::print(){
    cout << "Peso: " << getPeso() << endl;
    cout << "Velocidade maxima: " << getVelMax() << endl;
    cout << "Preco: " << getPreco() << endl;
}