#include <iostream>
#include <string>
#include "restaurante.h"

using namespace std;

int main(){
    string Nome, Endereco, Cidade, Estado, CEP, Telefone, Tipo, Preco;
    cout << "Nome: " << endl;
    cin >> Nome;
    cout << "Endereco: " << endl;
    cin >> Endereco;
    cout << "Cidade: " << endl;
    cin >> Cidade;
    cout << "Estado:" << endl;
    cin >> Estado;
    cout << "CEP:  " << endl;
    cin >> CEP;
    cout << "Telefone:  " << endl;
    cin >> Telefone;
    cout << "Tipo: " << endl;
    cin >> Tipo;
    cout << "Preco: " << endl;
    cin >> Preco;
    Restaurante *a = new Restaurante(Nome, Endereco, Cidade, Estado, CEP, Telefone, Tipo, Preco);
    cout << "======================================" << endl;
    a -> printRestaurante();

    return 0;
}