#include <iostream>

using namespace std;

//sobrecarga da funcao media
float media(float, float);
float media(float, float, float);
float media(float []);
//algortimo de ordenamento
void bubblesort(float [], const int);
void changePosition(float &, float &);


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
        //utiliza media com 2 argumentos
        m = media(N[0], N[1]);

    }else{

        cout << "Escolha a quantidade de notas que serao utilizadas, opcoes: 3 ou 4" << endl;
        do{
            cin >> op; 
            if(op == 3){

                for(int i=0; i < op; i++){
                    cout << "Nota " << i+1 << ": ";
                    cin >> N[i];
                }
                //utiliza media com 3 argumentos
                m = media(N[0], N[1], N[2]);

            }else if(op == 4){

                for(int i=0; i < op; i++){
                    cout << "Nota " << i+1 << ": ";
                    cin >> N[i];
                }
                //utiliza media com um vetor como argumento
                m = media(N);
            }else{
                cout << "Opcao invalida -> opcoes validas: 3 ou 4" << endl;
            }
        }while(op!=3 && op!=4); //enquanto n for uma opcao valida

    }

    //saida do console
    cout << "A media final: " << m << endl;
    cout << "Conceito: ";
    if(m >= 0  && m < 4){cout << "Reprovado." << endl;}
    if(m >= 4  && m < 7){cout << "Prova final." << endl;}
    if(m >= 7){cout << "Aprovado." << endl;}

    return 0;
}

float media(float n1, float n2){
    return (n1+n2)/2;
}

float media(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

float media(float n[4]){
    bubblesort(n, 4);
    cout << "Nota descartada: " << n[0] << endl;
    return media(n[1],n[2],n[3]);
}

void bubblesort(float a[4], const int length){
    for(int i = length; i>0; i--){

        for(int j=0; j<i-1; j++){

            //ordem crescente
            if(a[j] > a[j+1]){
                changePosition(a[j],a[j+1]);
            }
        }
    }
    for(int i=0; i<4; i++){cout << a[i] << endl;}    
}

void changePosition(float &a, float &b){
    //fun????o de mudan??a de posi????o 
    float var = a;
    a = b;
    b = var;
}