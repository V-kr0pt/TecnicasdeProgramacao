#include <iostream>
#include "class_circulo.h"
#include "class_elipse.h"

int main(){
    
    // ---- Teste da sobrecarga do operador + na classe Circulo ----
    cout << "\n\t\t --- Sobrecarga do operador '+' na classe Circulo ---" << endl;

    Circulo circulo0, circulo1, circulo2;
    
    cout << "\n--- Circulo 1 ---" << endl;
    circulo0.set_ratio(2); //setando r através de um método pois é um atributo protegido
    cout << "r1 = " << circulo0.ratio() << endl; //apresentando no console r através de um método (atributo protected) 
    
    cout << "\n--- Circulo 2 ---" << endl;
    circulo1.set_ratio(3);
    cout << "r2 = " << circulo1.ratio() << endl;

    cout << "\n--- Circulo 3 ---" << endl;
    circulo2 = circulo0 + circulo1;
    cout << "r3 = r1 + r2 = " << circulo2.ratio() << endl; //valor esperado: r3 = 5

    // ---- Teste da sobrecarga do operador * na classe Elipse ----

    cout << "\n\t\t--- Sobrecarga do operador '*' na classe Elipse ---" << endl;

    Elipse elipse0, elipse1, elipse2;
    
    elipse0.set_ratio(2); 
    elipse0.R = 4; //atribuindo um valor a R diretamente pois é um atributo público
    cout << "\n--- Elipse 1 ---" << endl;
    cout << "r1 = " << elipse0.ratio() << endl;
    cout << "R1 = " << elipse0.R << endl; //acessando R (atributo público)

    cout << "\n--- Elipse 2 ---" << endl;
    elipse1.set_ratio(3);
    elipse1.R = 5;
    cout << "r2 = " << elipse1.ratio() << endl;
    cout << "R2 = " << elipse1.R << endl; 

     cout << "\n--- Elipse 3 ---" << endl;
    elipse2 = elipse0 * elipse1;
    cout << "r3 = r1 * r2 = " << elipse2.ratio() << endl; //valor esperado: r3 = 6
    cout << "R3 = R1 * R2 = " << elipse2.R << endl; //valor esperado: R3 = 20

    return 0;
}