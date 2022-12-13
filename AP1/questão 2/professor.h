#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <iostream>
#include <string>

using namespace std;

class Professor{
    private:
        string nome;
        string matricula;
        int idade;
    public:
        Professor() = default;
        Professor(string nome, string matricula, int idade);
        
        void setNome(string nome);
        string getNome();
        void setMatricula(string matricula);
        string getMatricula();
        void setIdade(int idade);
        int getIdade();
};

#endif