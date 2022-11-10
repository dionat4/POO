#include <iostream> 
#include <string>  
#include "motor.h"  

using namespace std;  

Motor::Motor(){}
Motor::Motor(float Peso, float VelMax, float Preco, int Cilindro, int Potencia):Veiculo(Peso, VelMax, Preco){
    this -> Cilindro = Cilindro;      
    this -> Potencia = Potencia;   
}  

    int Motor::getCilindro(){
        return Cilindro; 
    }
    void Motor::setCilindro(int Cilindro){
        this -> Cilindro = Cilindro;
    }
    int Motor::getPotencia(){
        return Potencia;
    }
    void Motor::setPotencia(int Potencia){
        this -> Potencia = Potencia;
    }

void Motor::printMotor(){  
    Veiculo::print();    
    cout << "Cilindros: " << getCilindro() << endl;     
    cout << "Potencia: " << getPotencia() << endl; 
}