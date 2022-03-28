#include <iostream>

using namespace std;

void UserInputArray(float *);
void op_decider(int, float *, float *);
void soma(float *, float *);
void sub(float *, float *, int op);
void mulk(float *, int op);
void muls(float *,float *);
void mulv(float *, float *);
void ShowArray(float *);

int main(){
    //arrays de entrada 
    float A[3], B[3];
    //variável de decisão da operação
    int op;

    cout << "\n--OPERACOES EM ARRAYS---\n" << endl;
    cout << "Digite os arrays:" << endl;
    
    cout << "Array A: " << endl;
    UserInputArray(A); 
    cout << "Array B: " << endl;
    UserInputArray(B);


    while(1){
        //programa principal
        cout << "\nEscolha a operacao desejada:" << endl;
        cout << "0. Sair \t 1. A+B \t 2. A-B \t 3. B-A" << endl;
        cout << "4. kA \t 5. kB \t 6. A*B \t 7. AxB"  << endl;
        cin >> op;

        if(op == 0)
            //opção 0 = sair do while
            break;

        //função para determinar qual operação será feita
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
        //A+B
        soma(A,B);
        break;
    case 2:
        //A-B
        sub(A,B, op);
        break;
    case 3:
        //B-A
        sub(B,A, op);
        break;
    case 4:
        //kA
        mulk(A, op);
        break;
    case 5:
        //kB
        mulk(B, op);
        break;    
    case 6:
        //A*B
        muls(A,B);
        break;
    case 7:
        //A x B
        mulv(A,B);
        break;
    default:
        break;
    }

}

void soma(float A[], float B[]){
    //soma dois arrays
    float sum[3];
    for(int i=0; i<3; i++){
        sum[i] = A[i] + B[i];
    }
    //apresenta resultado
    cout << "A+B = ";
    ShowArray(sum);    
}

void sub(float A[], float B[], int op){
    //subtrai dois arrays
    float sub[3];
    for(int i=0; i<3; i++){
        sub[i] = A[i] - B[i];
    }
    //apresenta resultado
    if(op == 2)
        cout << "A-B = ";
    else 
        cout << "B-A = ";
    ShowArray(sub);    
}

void mulk(float A[], int op){
    //multiplica o array por uma constante
    float k, kA[3];
    cout << "Digite o valor de k: ";
    cin >> k;
    for(int i=0; i<3; i++){
        kA[i] = k*A[i];
    }
    //apresenta resultado
    if(op==4)
        cout << "kA = ";
    else 
        cout << "kB = ";    
    ShowArray(kA);    
}

void muls(float A[], float B[]){
    //multiplicação escalar de dois arrays
    float sum=0;
    for(int i=0; i<3; i++){
        sum += A[i] * B[i];
    }
    //apresenta resultado
    cout << "A*B = " << sum << endl;   
}

void mulv(float A[], float B[]){
    //multiplicação vetorial de dois arrays
    float C[3];
    C[0] = A[1]*B[2] - A[2]*B[1];
    C[1] = A[2]*B[0] - A[0]*B[2];
    C[2] = A[0]*B[1] - A[1]*B[0];

    cout << "AxB = ";
    ShowArray(C); 
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
