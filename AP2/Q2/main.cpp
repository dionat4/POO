#include <iostream>
#include <string> 
#include "empregado.h"
#include "empregadoass.h"
#include "empregadoho.h"
#include "dividezero.h"
#include <stdexcept> 

using namespace std;

double quotient(int numerador, int denominador){
    if(denominador == 0){
        throw DivideByZeroException();
    }

    return static_cast <double> (numerador) / denominador;
}

int main(){
    string nome;
    cout << "nome: ";
    cin >> nome;

    float salario;
    cout << "salario: ";
    cin >> salario;

    int hora;
    cout << "hora: ";
    cin >> hora;

    float valor_da_hora;
    cout << "valor da hora: ";
    cin >> valor_da_hora;

    Empregado *p[2];

    p[0] = new EmpregadoAssalariado (nome, salario);
    p[1] = new EmpregadoHorista(nome, hora, valor_da_hora);

    for(int i = 0; i < 2; i++){
        p[i] -> print();
    }



    try{
        cout << "O valor do salario é: " << quotient(10, hora);
    }
    catch(DivideByZeroException &divideByZeroException){
        cout << "Uma exceção ocorreu: " << endl;
}
}