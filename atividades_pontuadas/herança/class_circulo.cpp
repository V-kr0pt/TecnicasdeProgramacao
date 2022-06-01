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

//Métodos Públicos
void Circulo::set_ratio(float a){
    r = a;
}

void Circulo::increase_ratio(float p){
    r = (1+p/100)*r;
}

void Circulo::set_center(float a, float b){
    x = a;
    y = b;    
}

void Circulo::show_ratio(){
    cout << "Raio = " << r << endl;
}

void Circulo::show_center(){
    cout << "Centro = (" << x << "," << y <<")"<< endl;
}

void Circulo::show_area(){
    cout << "Area = " << area(r) << endl;
}

void Circulo::show_circumference(){
    cout << "Perimetro = " << circumference(r) << endl;
}

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

//Métodos Privados
float Circulo::area(float r){
    return  M_PI*pow(r,2); //pi*r²
}

float Circulo::circumference(float r){
    return 2*M_PI*r;
}

