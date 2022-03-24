#include <iostream>
#include <cstring>

using namespace std;

void UserInputArray(float *);
void op_decider(int, float *, float *);
void soma(float *, float *);
void ShowArray(float *);


int main(){
    float A[3], B[3];
    int op;

    cout << "--OPERACOES EM VETORES---" << endl;
    cout << "Digite os vetores:" << endl;
    
    cout << "Vetor A: " << endl;
    UserInputArray(A); 
    cout << "Vetor B: " << endl;
    UserInputArray(B);


    while(1){
        cout << "Escolha a operacao desejada" << endl;
        cout << "0. Sair \t 1. A+B \t 2. A-B \t 3. B-A" << endl;
        cout << "4. kA \t 5. kB \t 6. A*B \t 7. AxB"  << endl;
        cin >> op;

        if(op == 0)
            break;

        op_decider(op, A, B);
    } 
    return 0;
}

void UserInputArray(float A[]){
    //coloca os inputs do usuario em um vetor
    for (int i=0; i<3; i++){
        cin >> A[i];
    }
}

void op_decider(int op, float A[], float B[]){
    switch (op)
    {
    case 1:
        cout << "Soma!" << endl;
        soma(A,B);
        break;
    case 2:
        cout << "Sub A-B!" << endl;
        //sub(A,B);
        break;
    case 3:
        cout << "Sub B-A!" << endl;
        //sub(B,A);
        break;
    case 4:
        //mulk(A);
        break;
    case 5:
        //mulk(B);
        break;    
    case 6:
        //muls(A,B);
        break;
    case 7:
        //mulv(A,B)
        break;
    default:
        break;
    }

}

void soma(float A[], float B[]){
    //soma dois vetores
    float sum[3];
    for(int i=0; i<3; i++){
        sum[i] = A[i] + B[i];
    }
    //apresenta resultado
    cout << "A+B = ";
    ShowArray(sum);    
}

void ShowArray(float v[]){
    //mostra o array no terminal
    cout << "[" ;
    for(int i=0; i<3; i++){
        cout << v[i];
        if (i!=2){
            cout << ",";
        }    
    }
    cout << "]" << endl;
}
