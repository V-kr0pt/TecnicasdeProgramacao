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

//Função destrutora
Cone::~Cone(){};

//Função para cálculo de volume
float Cone::volume(){
    return 1/3*M_PI*pow(r,2)*H;        
}