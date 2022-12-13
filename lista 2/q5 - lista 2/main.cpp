#include <iostream>
#include "Data.h"
using namespace std;

int main(){
    int dia, mes, ano;
    cout << "Dia: " << endl;
    cin >> dia;

    cout << "Mes: " << endl;
    cin >> mes;

    cout << "Ano: " << endl;
    cin >> ano;
    Data *j = new Data(dia, mes, ano);
    j->printdata();
    j->numdias(mes);
    j->numdias("novembro");
}