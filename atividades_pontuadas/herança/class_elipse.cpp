#include <cmath>
#include "class_elipse.h"

//Sobrecarga da função construtora
Elipse::Elipse(){
    x = 0;
    y = 0;
    r = 1;
    R = 2;
}


Elipse::Elipse(float a, float b){
    x = a;
    y = b;
    r = 1;
    R = 2;
}


Elipse::Elipse(float a, float b, float c, float d){
    x = a;
    y = b;
    r = c;
    R = d;
}

//Função destrutora
Elipse::~Elipse(){}

//Função para cálculo de área
float Elipse::area(){
    return r*R*M_PI;        
}