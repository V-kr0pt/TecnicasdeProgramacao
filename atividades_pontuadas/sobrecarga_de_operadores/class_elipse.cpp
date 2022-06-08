#include <cmath>
#include "class_elipse.h"

// -- Sobrecarga da função construtora --

//Função construtora sem parâmetros
Elipse::Elipse(){
    x = 0;
    y = 0;
    r = 1;
    R = 2;
}

//Função construtora com dois parâmetros
Elipse::Elipse(float a, float b){
    x = a;
    y = b;
    r = 1;
    R = 2;
}

//Função construtora com quatro parâmetros
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

Elipse Elipse::operator * (Elipse elipse){
    Elipse temp; //objeto temporário da classe Elipse
    float r_temp, R_temp; //raio menor (r) e raio maior (R) do objeto temp
    
    // o raio menor da nova elipse será a multiplicação dos raios menores das duas elipses
    r_temp = this->ratio() * elipse.ratio(); 
    // o Raio maior da nova elipse será a multiplicação dos raios maiores das duas elipses
    R_temp = this->R * elipse.R; 

    //mudando os raios do objeto temp
    temp.set_ratio(r_temp);
    temp.R = R_temp;

    //retornando o objeto
    return temp;

}