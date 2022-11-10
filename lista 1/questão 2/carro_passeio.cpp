#include <iostream>
#include <string>
#include "carro_passeio.h"

using namespace std;

CarroPasseio::CarroPasseio(){}
CarroPasseio::CarroPasseio(float Peso, float VelMAx, float Preco, int Cilindro, int Potencia, string Modelo, string Cor):Motor(Peso, VelMAx, Preco, Cilindro, Potencia){
    this -> Modelo = Modelo;
    this -> Cor = Cor;
}

    string CarroPasseio::getModelo(){
        return Modelo; 
    }
    void CarroPasseio::setModelo(string Modelo){
        this -> Modelo = Modelo;
    }
    string CarroPasseio::getCor(){
        return Cor;
    }
    void CarroPasseio::setCor(string Cor){
        this -> Cor = Cor;
    }

void CarroPasseio::printCarroPasseio(){
    Motor::printMotor();
    cout << "Modelo: " << getModelo() << endl;
    cout << "Cor: " << getCor() << endl;
}