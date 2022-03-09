#include <iostream>
#include <cmath>

//Para a questao7
#define pi 3.14159

void questao1(void);
void questao2(void);
void questao3(void);
void questao4(void);
void questao5(void);
void questao6(void);
void questao7(void);
// void questao8(void);

int main(){
    // questao1();
    // questao2();
    // questao3();
    // questao4();
    // questao5();
    // questao6();
    questao7();
}

void questao1(){
    /* 
    Imprima (mostre na tela) seu nome completo 
    e sua idade em linhas separadas.
    */
    std::cout << "Vitor de Sousa França" << "\n";
    std::cout << "22" << "\n";
}

void questao2(){
    /*
    Imprima a raiz quadrada dos seguinte números:
     4, 19 e 16 
    */
   std::cout << sqrt(4) << "\n" << sqrt(19) << "\n" 
                                << sqrt(16) << "\n";

}

void questao3(){
    /*
    Imprima a raiz quadrada de um 
    valor inteiro digitado pelo usuário.
    */
    int x;
    std::cout << "Digite um valor: ";
    std::cin >> x;
    std::cout << "A raiz quadrada do valor: "<< sqrt(x) 
                                             << "\n";
}

void questao4(){
    /*
    Imprima a raiz quadrada de um 
    valor float digitado pelo usuário.
    */questao6();
    float x;
    std::cout << "Digite um valor: ";
    std::cin >> x;
    std::cout << "A raiz quadrada do valor: "<< sqrt(x) 
                                             << "\n";
}

void questao5(){
    /*
    Imprima a hipotenusa de um triângulo retângulo 
    cujos catetos sejam digitados pelo usuário.
    */

    float x, y, h;
    std::cout << "Digite o tamanho de um cateto: ";
    std::cin >> x;
    std::cout << "Digite o tamanho do outro cateto: ";
    std::cin >> y;
    h = sqrt(pow(x,2) + pow(y,2));
    std::cout << "O tamanho da hipotenusa do triangulo retangulo: " 
                                                    << h << "\n";
}

void questao6(){
    /*
    Imprima o seno, cosseno e tangente dos ângulos 
    (exceto o reto) de um triângulo retângulo cujos 
    catetos sejam digitados pelo usuário
    */
    float theta, alpha;
    std::cout << "Digite o ângulo theta (°): " ;
    std::cin >> theta;
    std::cout << "Digite o ângulo alpha (°): ";
    std::cin >> alpha;
    if(theta == 90 || alpha == 90){
        std::cout << "O ângulo não pode ser reto.\n" << 
        "Digite outro valor \n";
        questao6();        
    }else{
        theta *= M_PI/180;

        std::cout << "\nseno theta = " << sin(theta) << "\n";
        std::cout << "seno alpha = " << sin(alpha) << "\n";
        std::cout << "cosseno theta = " << cos(theta) << "\n";
        std::cout << "cosseno alpha = " << cos(alpha) << "\n";
        std::cout << "tangente theta = " << tan(theta) << "\n";
        std::cout << "tangente alpha = " << tan(alpha) << "\n";
    }
}

void questao7(){
    /* 
    Imprima o raio, o perímetro e a área de 
    um círculo cujo raio seja dado pelo usuário. 
    Utilize o operador #define para definir o valor de pi.
    */
   int r;

   std::cout << "Digite o raio do circulo: ";
   std::cin >> r;
   std::cout << "O perímetro do circulo: p = " << 2*pi*r << "\n";
   std::cout << "A área do circulo: A = " << pi*pow(r,2) << "\n";
 
}


