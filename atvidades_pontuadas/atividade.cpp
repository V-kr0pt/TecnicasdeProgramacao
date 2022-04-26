#include <iostream>

using namespace std;

float media(float n1, float n2);
float media(float n1, float n2, float n3);
float media(float N[4]);

int main(){
    int cargahoraria, op;
    float m, N[4]; 

    cout << "Digite a carga horaria da disciplina: ";
    cin >> cargahoraria;

    if(cargahoraria <= 45){

        cout << "Adicione as duas notas" << endl;
        for(int i=0; i<2; i++){
            cout << "Nota " << i+1 << ": ";
            cin >> N[i];
        }  
        m = media(N[0], N[1]);

    }else{
        cout << "Escolha a quantidade de notas que serao utilizadas, opcoes: 3 ou 4" << endl;
        cin >> op; 

        do{
            if(op == 3){

                for(int i=0; i < op; i++){
                    cout << "Nota " << i+1 << ": ";
                    cin >> N[i];
                }
                
                m = media(N[0], N[1], N[2]);

            }else if(op == 4){

                for(int i=0; i < op; i++){
                    cout << "Nota " << i+1 << ": ";
                    cin >> N[i];
                }

                m = media(N);
            }
        }while(op!=3 && op!=4);

    }

    cout << "A media final: " << m << endl;

    return 0;
}

float media(float n1, float n2){
    return (n1+n2)/2;
}

float media(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

float media(float n[4]){
    //melhor fazer um vetor
    // tenho q fazer um sort crescente para usar media3
    return media(n[0],n[1],n[2]);
}