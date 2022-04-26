#include <iostream>

using namespace std;

float media(float n1, float n2);
float media(float n1, float n2, float n3);
float media(float n1, float n2, float n3, float n4);

int main(){
    int cargahoraria, op;
    float N1, N2, N3, N4, m;

    cout << "Digite a carga horaria da disciplina: ";
    cin >> cargahoraria;

    if(cargahoraria<=45){
        cout << "Adicione as duas notas" << endl;
        cout << "Primeira Nota: ";
        cin >> N1;
        cout << "Segunda Nota: ";
        cin >> N2;        
        m = media(N1, N2);
    }else{
        cout << "Escolha a quantidade de notas que serao utilizadas, opcoes: 3 ou 4" << endl;
        cin >> op; 

        do{
            if(op == 3){
                cout << "Primeira Nota: ";
                cin >> N1;
                cout << "Segunda Nota: ";
                cin >> N2;
                cout << "Terceira Nota: ";
                cin >> N3;

                m = media(N1, N2, N3);

            }else if(op == 4){
                cout << "Primeira Nota: ";
                cin >> N1;
                cout << "Segunda Nota: ";
                cin >> N2;
                cout << "Terceira Nota: ";
                cin >> N3;
                cout << "Quarta Nota: ";
                cin >> N4;

                m = media(N1, N2, N3, N4);
            }
        }while(op!=3 || op!=4);

    }



    return 0;
}

float media(float n1, float n2){
    return (n1+n2)/2;
}

float media(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

float media(float n1, float n2, float n3, float n4){
    //melhor fazer um vetor
    return (n1+n2+n3)/3;
}

