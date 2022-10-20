#include <iostream>
#include <string>
#include "carro_passeio.h"

using namespace std;

int main(){
    float Peso;
    float VelMax;
    float Preco;
    int Cilindro;
    int Potencia;
    string Modelo;
    string Cor;
    cout << "Peso: " << endl;
    cin >> Peso;
    cout << "Velocidade maxima: " << endl;
    cin >> VelMax;
    cout << "Preco: " << endl;
    cin >> Preco;
    cout << "Cilindro: " << endl;
    cin >> Cilindro;
    cout << "Potencia:  " << endl;
    cin >> Potencia;
    cout << "Modelo:  " << endl;
    cin >> Modelo;
    cout << "Cor: " << endl;
    cin >> Cor;
    CarroPasseio *a = new CarroPasseio(Peso, VelMax, Preco, Cilindro, Potencia, Modelo, Cor);
    cout << "======================================" << endl;
    a -> printCarroPasseio();

    return 0;
}