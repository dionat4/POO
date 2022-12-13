#include <iostream>
#include <string>
#include "professor.h"

using namespace std;

Professor::Professor(string nome, string matricula, int idade){
    setNome(nome);
    setMatricula(matricula);
    setIdade(idade);
}


void Professor::setNome(string nome) {
    this->nome = nome; 
    } 
string Professor::getNome() { 
    return this->nome; 
    }
void Professor::setMatricula(string matricula) {
     this->matricula = matricula; 
     } 
string Professor::getMatricula() { 
    return this->matricula;
 }
