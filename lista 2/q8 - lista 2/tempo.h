#ifndef TEMPO_H
#define TEMPO_H

class Tempo{
private:
    int min;
    int hr;
    int seg;
public:
    int getmin();
    int gethr();
    int getseg();
    
    void setmin(int);
    void sethr(int);
    void setseg(int);
    
    Tempo() = default;
    Tempo(int hr, int min, int seg);
    
    void print();
    Tempo operator-(Tempo &aux);
    Tempo operator+(Tempo &aux);
};

#endif