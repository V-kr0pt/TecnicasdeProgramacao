#ifndef CLASS_CIRCULO_H
#define CLASS_CIRCULO_H

using namespace std;

class Circulo {
    private:
        float area(float); //função de cálculo de área
        float circumference(float); //função de calculo de circunferência
    
    protected: //para que seja possível acessar a partir de outras classes
        float r=1; //raio
        float x,y; //posição do centro no R2        
    
    public:
        Circulo();
        Circulo(float, float); //construtora
        Circulo operator + (Circulo); //sobrecarga do operador + (soma os raios dos circulos)
        float ratio(); //retorna o raio
        void set_ratio(float); //define r
        void increase_ratio(float); //aumento percentual em r
        void set_center(float, float); //define x e y
        void show_ratio(); //aprenseta r no console
        void show_center(); //apresenta x e y no console
        void show_area(); // apresenta o resultado da área do círculo
        void show_circumference(); //apresenta o resultado do perímetro do círculo
        float distance(Circulo); //apresenta a distância entre o círculo e outro
};

#endif