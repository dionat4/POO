#ifndef DATA_INCLUDED
#define DATA_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Data{
private:
    int ano, dia, mes;

public:
    Data(int dia, int mes, int ano);
    
    void setdia(int ano);
    void setano(int mes);
    void setmes(int dia);

    int getdia();
    int getano();
    int getmes();
    
    void printdata();
    void numdias(int mes);
    void numdias(string mes);
};

#endif