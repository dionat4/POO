#include <iostream>
#include <string>
#include "empresa.h"

using namespace std;

Empresa::Empresa(){}
Empresa::Empresa(string Nome, string Endereco, string Cidade, string Estado, string CEP, string Telefone){
    this -> Nome = Nome;
    this -> Endereco = Endereco;
    this -> Cidade = Cidade;
    this -> Estado = Estado;
    this -> CEP = CEP;
    this -> telefone = Telefone;
}

string Empresa::getNome(){
    return Nome;
}
void Empresa::setNome(string Nome){
    this -> Nome = Nome;
}

string Empresa::getEndereco(){
    return Endereco;
}
void Empresa::setEndereco(string Endereco){
    this -> Endereco = Endereco;
}

string Empresa::getCidade(){
    return Cidade;
}
void Empresa::setCidade(string Cidade){
    this -> Cidade = Cidade;
}

string Empresa::getEstado(){
    return Estado;
}
void Empresa::setEstado(string Estado){
    this -> Estado = Estado;
}

string Empresa::getCEP(){
    return CEP;
}
void Empresa::setCEP(string CEP){
    this -> CEP = CEP;
}

string Empresa::getelefone(){
    return telefone;
}
void Empresa::setelefone(string Telefone){
    this -> telefone = Telefone;
}

void Empresa::print(){
    cout << "Nome: " << getNome() << endl;
    cout << "Endereco: " << getEndereco() << endl;
    cout << "Cidade: " << getCidade() << endl;
    cout << "Estado: " << getEstado() << endl;
    cout << "CEP: " << getCEP() << endl;
    cout << "Telefone: " << getelefone() << endl;
}