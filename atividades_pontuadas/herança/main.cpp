//modificar nome de op2
//usar sobrecarga para parameters

#include <iostream>
#include "class_elipse.h"
#include "class_cone.h"

using namespace std;

void operation_input(int&);
void elipse_input(Elipse&);
void cone_input(Cone&);
void elipse_parameters(Elipse&);
void cone_parameters(Cone&);

int main(){
    int op;
    char op2;
    Elipse elipse;
    Cone cone;   
 
    //Obtendo seleção do usuário (elipse ou cone)
    operation_input(op);
    
    //se elipse
    if(op==1){ 
        //setando valores da elipse
        elipse_parameters(elipse);
        //Apresentando área da elipse
        cout << "\nA área da elipse é " << elipse.area() << " unidades de área\n" << endl;

    //se cone
    }else{ 
        //setando valores do cone
        cone_parameters(cone);
        //Apresentando volume do cone
        cout << "\nO volume do cone é ";
        cone.show_volume();
        cout << "\n\n";
    }       

    return 0;
}

void operation_input(int &op){
    do{
        cout << "Escolha o que deseja cadastrar:" << endl;
        cout << "1.Elipse \n2.Cone" << endl;
        cout << "-> ";
        cin >> op;
        if(op!=1 and op!=2)
            cout<< "\t\t-- Operação inválida --\n\t\t--> Tente novamente! <--\n"<< endl;
    }while(op!=1 and op!=2);
}

void elipse_input(Elipse &elipse){
    float x, y;
    cout << "Digite o ponto no R2 em que está localizado o centro da elipse" << endl;
    cout << "x: ";
    cin >> x;
    cout <<"y: ";
    cin >> y;

    float r, R;
    cout << "Digite o raio menor e o raio maior da elipse (na ordem)" << endl;
    cout << "r: ";
    cin >> r;
    cout<< "R: ";
    cin >> R;

    elipse.set_center(x,y);
    elipse.set_ratio(r);
    elipse.R = R;

}

void cone_input(Cone &cone){
    float x, y;
    cout << "Digite o ponto no R2 em que está localizado o centro do cone" << endl;
    cout << "x: ";
    cin >> x;
    cout <<"y: ";
    cin >> y;

    float r;
    cout << "Digite o raio da base" << endl;
    cout << "r: ";
    cin >> r;

    float H;
    cout << "Digite a altura do cone" << endl;
    cout<< "H: ";
    cin >> H;

    //setando valores do cone
    cone.set_center(x,y);
    cone.set_ratio(r);
    cone.set_height(H);
};

//Pergunta ao usuário se os parâmetros serão os padrões ou modificados
void elipse_parameters(Elipse &elipse){
    char op2;
    cout << "Deseja usar a elipse padrão? (C=(0,0); r=1; R=2)" << endl;
    //se for diferente de 's' os dados serão perguntados ao usuário
    cout << "(s/N)-> ";
    cin >> op2;        
    if(op2 != 's'){
        elipse_input(elipse);
    }
}

void cone_parameters(Cone &cone){
    char op2;
    cout << "Deseja usar o cone padrão? (C=(0,0); r=1; H=1)" << endl;
    //se entrada for diferente de 's' os dados serão perguntados ao usuário
    cout << "(s/N)-> ";
    cin >> op2;        
    if(op2 != 's'){
        cone_input(cone);
    }
}