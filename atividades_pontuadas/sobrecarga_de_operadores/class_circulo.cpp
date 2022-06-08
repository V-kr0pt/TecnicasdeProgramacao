#include <iostream>
#include <cmath>
#include "class_circulo.h"

using namespace std;

//Funções construtoras (sobrecarga)
Circulo::Circulo(){
    x=0;
    y=0;
}

Circulo::Circulo(float a, float b){
    x = a;
    y = b;    
}

// ---Métodos Públicos---
//Função para modificar raio
void Circulo::set_ratio(float a){
    r = a;
}

//Função para aumentar o raio utilizando porcentagem
void Circulo::increase_ratio(float p){
    r += (p/100)*r;
}

//Função para modificar centro 
void Circulo::set_center(float a, float b){
    x = a;
    y = b;    
}

//Função para apresentar raio
void Circulo::show_ratio(){
    cout << "Raio = " << r << endl;
}

//Função para retorno de valor de raio
float Circulo::ratio(){
    return r;
}

//Função para apresentar centro
void Circulo::show_center(){
    cout << "Centro = (" << x << "," << y <<")"<< endl;
}

//Função para apresentar área
void Circulo::show_area(){
    cout << "Area = " << area(r) << endl;
}

//Função para apresentar circunferência
void Circulo::show_circumference(){
    cout << "Perimetro = " << circumference(r) << endl;
}

//Função para calculo de distância entre círculos
float Circulo::distance(Circulo B){
    float x_dist = (x - B.x);
    float y_dist = (y - B.y);
    float center_dist = sqrt(pow(x_dist,2) + pow(y_dist,2));
    float dist = center_dist - r - B.r; //distancia entre as circunferencias
    if(dist < 0){
        dist = 0;
    }
    return  dist;
}

// --- Métodos Privados ---

//Função para cálulo de área de um círculo
float Circulo::area(float r){
    return  M_PI*pow(r,2); //pi*r²
}

//Função para cálculo de circunferência
float Circulo::circumference(float r){
    return 2*M_PI*r;
}

//Função para sobrecarga de operador +
Circulo Circulo::operator + (Circulo circulo){
    this->r += circulo.ratio();
}