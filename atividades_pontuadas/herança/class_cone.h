#ifndef CLASS_CONE_H
#define CLASS_CONE_H

#include "class_circulo.h"

class Cone : public Circulo{
    private:
        float H; //altura como membro privado
    public:
        //Sobrecarga da função construtora
        Cone();
        Cone(float, float);
        Cone(float, float, float);
        //Função para cálculo de área
        float volume();
        ~Cone();
};

#endif
