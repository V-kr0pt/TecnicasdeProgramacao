#include <iostream>
#include <cmath>
#include "class_cone.h"

// --Sobrecarga da função construtora--

//Função construtora sem parâmetros
Cone::Cone(){
    x = 0;
    y = 0;
    r = 1;
    H = 1;
}

//Função construtora com dois parâmetros
Cone::Cone(float a, float b){
    x = a;
    y = b;
    r = 1;
}

//Função construtora com três parâmetros
Cone::Cone(float a, float b, float c){
    x = a;
    y = b;
    r = c;
}

//Função destrutora
Cone::~Cone(){};

//Função para definir altura do cone
void Cone::set_height(float heigth){
    H = heigth;
}

//Função para cálculo de volume
float Cone::volume(){
    return (3.14*pow(r,2)*H)/3 ;       
}
//Função para apresentar volume no console
void Cone::show_volume(){
    std::cout << volume() << " unidades de volume ";
}

Circulo operator + (Circulo circulo){
    this->R += circulo.R;   
}