#include <iostream>
#include <string>
#include "superheroi.h"

using namespace std;

int main() {
    string NomeHumano, Sexo, Lingua, Etnia, NomeInseto, CodiNome, Traumas, Poderes; 
    int Idade;
    bool Venenoso, Alado, Ferrao;

    cout << "Nome Humano: " << endl;
    cin >> NomeHumano;

    cout << "Sexo: " << endl;
    cin >> Sexo;

    cout << "Idade: " << endl;
    cin >> Idade;

    cout << "Lingua: " << endl;
    cin >> Lingua;

    cout << "Etnia:" << endl;
    cin >> Etnia;

    cout << "Nome do Inseto:  " << endl;
    cin >> NomeInseto;

    cout << "O inseto e Venenoso? Digite: [1] True ou [0] False: " << endl;
    cin >> Venenoso;

    cout << "O inseto e Alado? Digite: [1] True ou [0] False: " << endl;
    cin >> Alado;

    cout << "O inseto possui Ferrao? Digite: [1] True ou [0] False: " << endl;
    cin >> Ferrao;

    cout << "Codi Nome Heroi: " << endl;
    cin >> CodiNome;

    cout << "Traumas: " << endl;
    cin >> Traumas;

    cout << "Poderes: " << endl;
    cin >> Poderes;

    SuperHeroi *a = new SuperHeroi(NomeHumano, Sexo, Idade, Lingua, Etnia, NomeInseto, Venenoso, Alado, Ferrao, CodiNome, Traumas, Poderes);
    cout << "======================================" << endl;
    a -> printSuperHeroi();

    return 0;
}