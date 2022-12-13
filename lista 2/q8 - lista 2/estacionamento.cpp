/*Crie uma classe Estacionamento para armazenar dados de um estacionamento. Os
atributos devem representar a placa e modelo do carro além da hora de entrada e saída
do estacionamento. Utilize dois objetos da classe Tempo criada no exercício anterior. Crie
métodos para:
(a) Funcionar como getter e setter;
(b) Inicializar os dados com vazio ou zero;
(c) Imprimir os dados de um carro estacionado;
(d) Calcular e retornar o valor a ser pago pelo carro estacionado. Considere o preço
de R$1,50 por hora. Utilize o método da classe Tempo.
Crie um vetor de 5 posições e preencha-o para testar sua classe.
*/

#include <iostream>
#include <string>
#include "estacionamento.h"

using namespace std;

Estacionamento::Estacionamento(string Placa, string Modelo){
    this -> placa = Placa;
    this -> modelo = Modelo;
}


double Estacionamento::custo(Tempo &h){
    double x = (double) h.gethr() * 1.5;
    return x;

}

void Estacionamento::setPlaca(string Placa){
    this -> placa = Placa;
}
void Estacionamento::setModelo(string Modelo){
    this -> modelo = Modelo;
}

string Estacionamento::getPlaca(){
    return placa;
}
string Estacionamento::getModelo(){
    return modelo;
}

void Estacionamento::printCarro(Tempo &h){
    cout << "Placa e modelo: " << getPlaca() << getModelo();
    cout << "Tempo de estacionado: " << h.gethr() << endl;
    cout << "Custo do estacionamento: " << custo(h) << endl;
}