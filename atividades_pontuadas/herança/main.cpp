#include <iostream>
#include "class_elipse.h"
#include "class_cone.h"

using namespace std;

//Declaração de funções
void operation_input(int&);
void elipse_input(Elipse&);
void cone_input(Cone&);
void elipse_parameters(Elipse&);
void cone_parameters(Cone&);

int main(){
    int op; //flag da operação
    Elipse elipse; //instânciando objeto da classe Elipse (sem parâmetros)
    Cone cone;   //instânciando objeto da classe Cone (sem parâmetros)
   
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
        cone.show_volume(); //como volume() é um método privado, show_volume() se faz necessário 
        cout << "\n\n";
    }       
 
    return 0;
}

//Função para seleção de elipse ou cone
void operation_input(int &op){
    //enquanto não for uma operação inválida
    do{
        cout << "Escolha o que deseja cadastrar:" << endl;
        cout << "1.Elipse \n2.Cone" << endl;
        cout << "-> ";
        cin >> op;
        if(op!=1 and op!=2)
            cout<< "\t\t-- Operação inválida --\n\t\t--> Tente novamente! <--\n"<< endl;
    }while(op!=1 and op!=2);
}

//Funções para modificar os parâmetros
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

    elipse.set_center(x,y); //set_center() pois x e y são atributos protegidos
    elipse.set_ratio(r); //set_ratio() pois r é um atributo protegido
    elipse.R = R; //R é um atributo público

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
    cone.set_center(x,y); //atributo protegido
    cone.set_ratio(r); //atributo protegido
    cone.set_height(H); //atributo privado
};

//Funções para perguntar ao usuário se os parâmetros serão os padrões ou modificados
void elipse_parameters(Elipse &elipse){
    char op;
    cout << "Deseja usar a elipse padrão? (C=(0,0); r=1; R=2)" << endl;
    //se for diferente de 's' os dados serão perguntados ao usuário
    cout << "(s/N)-> ";
    cin >> op;        
    if(op != 's'){
        elipse_input(elipse);
    }
}

void cone_parameters(Cone &cone){
    char op;
    cout << "Deseja usar o cone padrão? (C=(0,0); r=1; H=1)" << endl;
    //se entrada for diferente de 's' os dados serão perguntados ao usuário
    cout << "(s/N)-> ";
    cin >> op;        
    if(op != 's'){
        cone_input(cone);
    }
}