#include <iostream>
#include <cmath>

using namespace std;

class Circulo {
    private:
        float r=0; //raio
        float x,y; //posição do centro no R2
        float area(float); //função de cálculo de área
        float circumference(float); //função de calculo de circunferência
    public:
        Circulo(float, float); //construtora
        void set_ratio(float); //define r
        void increase_ratio(float); //aumento percentual em r
        void set_center(float, float); //define x e y
        void show_ratio(); //aprenseta r no console
        void show_center(); //apresenta x e y no console
        void show_area(); // apresenta o resultado da área do círculo
        void show_circumference(); //apresenta o resultado do perímetro do círculo
        float distance(Circulo); //apresenta a distância entre o círculo e outro

};

//Função construtora
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
    return center_dist - r - B.r; //distancia entre as circunferencias
}

//Métodos Privados
float Circulo::area(float r){
    return  M_PI*pow(r,2); //pi*r²
}

float Circulo::circumference(float r){
    return 2*M_PI*r;
}


int main(){
    Circulo A(0,0); //circulo com centro x=0,y=0 (origem) 
    Circulo B(5,20); //circulo com centro em x=5, y=20
    cout << '\n';
    //testando método setar raio e apresentar raio
    cout << "Definindo raio círculo A" << endl;
    A.set_ratio(5); //raioA = 5
    A.show_ratio();
    cout << "---------" << endl;

    //testando método aumentar raio
    cout << "Aumentando raio círculo A em 100%" << endl;
    A.increase_ratio(100); //aumento de 100% no raio => raioA = 10
    A.show_ratio();
    cout << "---------" << endl;

    //testando método setar centro
    cout << "Definindo centro do círculo A" << endl;
    A.set_center(5,0); //centro em x=5, y=0
    A.show_center();
    cout << "---------" << endl;

    //testando método calculo de área + apresentar área
    cout << "Área do círculo A" << endl;
    A.show_area(); //area = pi*10^2 = 100*pi
    cout << "---------" << endl;

    //testando método calculo de perímetro + apresentar perímetro
    cout << "Definindo raio círculo B" << endl;
    B.set_ratio(10); // raioB = 10
    B.show_ratio();
    cout << "---------" << endl;
    cout << "Perímetro círculo B" << endl;
    B.show_circumference(); //perímetro = 2*pi*10 = 62,83
    cout << "---------" << endl;


    //testando distancia 
    // sqrt((5-5)^2 + (0-20)^2)- 10 - 10 = 0
    cout << "Distância entre A e B" << endl;
    cout << "\n-> dist(A,B) = " << A.distance(B) << endl;  //distancia = 0
    cout << endl;

    //calculando outra distancia:
    //triangulo (5*5)^2 = (4*5)^2 + (3*5)^2 
    //a hipotenusa = 25 é a distância entre os centros, retirando os raios rA=5 e rB = 5
    //=> dist = 15

    //setando o círculo A com raio 5 e na origem
    cout << "---------" << endl;
    cout << "Círculo A " << endl;
    A.set_center(0,0);
    A.show_center();
    A.set_ratio(5);
    A.show_ratio();
    cout << "---------" << endl;
    
    //setando o círculo B com raio 5 em x=4*5 e em y=3*5
    cout << "Círculo B" << endl;
    B.set_center(20,15);
    B.show_center();
    B.set_ratio(5);
    B.show_ratio();
    cout << "---------" << endl;

    //apresentando a distância entre os círculos
    cout << "\n-> dist(A,B) = " << A.distance(B) << endl;  //distancia = 15
    cout << endl;
    cout << "---------" << endl;

    return 0;
}