#include <iostream>
#include <string>
#include "caminhao.h"

using namespace std;

Caminhao::Caminhao(){}
Caminhao::Caminhao(float Peso, float VelMAx, float Preco, int Cilindro, int Potencia, float Tonelada, float AlMax, float Comprimento):Motor(Peso, VelMAx, Preco, Cilindro, Potencia){
    this -> Tonelada = Tonelada;
    this -> AlMax = AlMax;
    this -> Comprimento = Comprimento;
}

    float Caminhao::getTonelada(){
        return Tonelada; 
    }
    void Caminhao::setTonelada(float Tonelada){
        this -> Tonelada = Tonelada;
    }
    float Caminhao::getAlMax(){
        return AlMax;
    }
    void Caminhao::setAlMax(float AlMax){
        this -> AlMax = AlMax;
    }
    float Caminhao::getComprimento(){
        return Comprimento;
    }
    void Caminhao::setComprimento(float Comprimento){
        this -> Comprimento = Comprimento;
    }

void Caminhao::printCaminhao(){
    Motor::printMotor();
    cout << "Tonelada: " << getTonelada() << endl;
    cout << "Altura Maxima: " << getAlMax() << endl;
    cout << "Comprimento: " << getComprimento() << endl;
}