#include <iostream>
#include "class_circulo.h"

int main(){
    
    // ---- Teste da sobrecarga do operador + na classe Circulo ----
    
    Circulo circulo0, circulo1, circulo2;
    
    circulo0.set_ratio(2);
    circulo1.set_ratio(3);
    cout << "r1 = ";
    circulo0.show_ratio();
    cout << "r2 = ";
    circulo1.show_ratio();

    cout << "Sobrecarga do operador '+' na classe Circulo" << endl;
    circulo2 = circulo0 + circulo1;
    cout << "r3 = ";
    circulo2.show_ratio(); //valor esperado: r3 = 5

    return 0;
}