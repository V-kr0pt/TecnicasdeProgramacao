#ifndef CLASS_ELIPSE_H
#define CLASS_ELIPSE_H

#include "class_circulo.h"

class Elipse : public Circulo{
    public:
        float R; //raio maior como membro público
        Elipse operator * (Elipse);
        //Sobrecarga da função construtora
        Elipse();
        Elipse(float, float);
        Elipse(float, float, float, float);
        //Função para cálculo de área
        float area();
        ~Elipse();
};


#endif