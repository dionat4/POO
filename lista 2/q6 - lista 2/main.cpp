#include <iostream>
#include "Aluno.h"
#include <string>

using namespace std;

int controlador(){
    static int num = 1;
    return num++;
}

int main(){
    Aluno *aluno = new Aluno[15]();
    for(int i = 0; i < 15; i++){
        int serie, grau;
        string nome;

        cout << "Nome do aluno" << i+1 << ": ";
        getline(cin, nome);

        cout << "Serie do aluno" << i+1 << ": ";
        cin >> serie;

        cout << "Grau do aluno" << i+1 << ": ";
        cin >> grau;

        aluno[i].setNome(nome);
        aluno[i].setSerie(serie);
        aluno[i].setGrau(grau);
        cin.ignore();
    }

    for(int i = 0; i < 15; i++){
        cout << aluno[i].getNome() << endl;
        cout << aluno[i].getSerie() << endl;
        cout << aluno[i].getGrau() << endl;
        cout << "controlador: " << controlador() << endl;
    }
}