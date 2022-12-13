#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo{
    private:
        double base, altura;
    public:
        Retangulo() = default;
        Retangulo(double base, double altura);

        void setBase(double base);
        void setAltura(double altura);

        double getBase();
        double getAltura();

        double calculaArea();
        double calculaPerimetro();

        void print();

};

#endif