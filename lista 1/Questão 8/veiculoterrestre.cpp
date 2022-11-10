#include <iostream>
#include <string>
#include "veiculoterrestre.h"

using namespace std;

VeiculoTerrestre::VeiculoTerrestre(float Peso, float VelMax, float Preco, int Ano, float Valor, string Modelo):Veiculo(Peso, VelMax, Preco){
    this -> Ano = Ano;      
    this -> Valor = Valor;
    this -> Modelo = Modelo;   
}

int VeiculoTerrestre::getAno(){
    return Ano;
}
void VeiculoTerrestre::setAno(int Ano){
    this -> Ano = Ano;
}
float VeiculoTerrestre::getValor(){
    return Valor;
}
void VeiculoTerrestre::setValor(float Valor){
    this -> Valor = Valor;
}
string VeiculoTerrestre::getModelo(){
    return Modelo;
}
void VeiculoTerrestre::setModelo(string Modelo){
    this -> Modelo = Modelo;
}

void VeiculoTerrestre::printVeiculoTerrestre(){  
    Veiculo::print();    
    cout << "Ano: " << getAno() << endl;     
    cout << "Valor: " << getValor() << endl;
    cout << "Modelo: " << getModelo() << endl; 
}