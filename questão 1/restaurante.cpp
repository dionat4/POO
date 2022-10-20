#include <iostream>
#include <string>

using namespace std;

#include "restaurante.h"

Restaurante::Restaurante(){}
Restaurante::Restaurante(string Nome, string Endereco, string Cidade, string Estado, string CEP, string Telefone, string Tipo, string Preco)
:Empresa(Nome, Endereco, Cidade, Estado, CEP, Telefone) {
    this -> Tipo = Tipo;
    this -> Preco = Preco;
}

string Restaurante::getTipo() {
    return Tipo;
}
void Restaurante::setTipo(string Tipo) {
    this -> Tipo = Tipo;
}

string Restaurante::getPreco() {
    return Preco;
}
void Restaurante::setPreco(string Preco) {
    this -> Preco = Preco;
}

void Restaurante::printRestaurante() {
    Empresa::print();
    cout << "Tipo: " << getTipo() << endl;
    cout << "Preco: " << getPreco() << endl;
}