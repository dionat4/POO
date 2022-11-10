#ifndef CONTA_H
#define CONTA_H

class Conta{
    private:
        double Saldo;
    public:
        Conta(double Saldo);

        void setSaldo(double Saldo);
        double getSaldo();

        void mostraCredito();
        void mostraDebito();
};

#endif