#ifndef CLASS_CONE_H
#define CLASS_CONE_H

#include "class_circulo.h"

class Cone : public Circulo{
    private:
        float H; //altura como membro privado
        //Função para cálculo de volume
        float volume();
    public:
        //Sobrecarga da função construtora
        Cone();
        Cone(float, float);
        Cone(float, float, float);
        ~Cone();
};

#endif
