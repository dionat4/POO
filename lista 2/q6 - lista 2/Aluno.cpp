#include <iostream>
#include <string>
#include "Aluno.h"

using namespace std;

Aluno::Aluno(string nome, int serie, int grau){
    this -> nome = nome;
    this -> serie = serie;
    this -> grau = grau;
}

Aluno::~Aluno(){
    cout << "Objeto destruido" << endl;
}

void Aluno::setNome(string nome){
    this -> nome = nome;
}

void Aluno::setSerie(int serie){
    this -> serie = serie;
}

void Aluno::setGrau(int grau){
    this -> grau = grau;
}

string Aluno::getNome(){
    return nome;
}

int Aluno::getSerie(){
    return serie;
}

int Aluno::getGrau(){
    return grau;
}
