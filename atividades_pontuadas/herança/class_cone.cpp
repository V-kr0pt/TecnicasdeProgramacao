#include <cmath>
#include "class_cone.h"

//Sobrecarga da função construtora
Cone::Cone(){
    x = 0;
    y = 0;
    r = 1;
}


Cone::Cone(float a, float b){
    x = a;
    y = b;
    r = 1;
}


Cone::Cone(float a, float b, float c){
    x = a;
    y = b;
    r = c;
}
/*
//Função destrutora
Elipse::~Elipse(){}

Função para cálculo de área
float Elipse::area(){
    return r*R*M_PI;        
}*/