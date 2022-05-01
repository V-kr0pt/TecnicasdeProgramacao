#include <iostream>
#include <string>

using namespace std;

void CPF_str2int(string , int []);
void showArray(int [], int);
int CPF_validation(int []);

int main(){ 
    string scpf;
    int icpf[11], r;

    getline(cin, scpf);    
    CPF_str2int(scpf, icpf);
    r = CPF_validation(icpf);
    
    if(r){
        cout << "CPF válido" << endl;
    }else{
        cout << "CPF inválido" << endl;
    }
    
    
    return 0;
}

void CPF_str2int(string scpf, int icpf[]){
    int j=0;
    //passando os dígitos para um vetor de inteiros
    for(int i=0; i<14; i++){
        if(isdigit(scpf[i])){
            icpf[j] = scpf[i] - '0'; //transforma char para int ASCII
            j++;
        }
    }

}

void showArray(int A[], const int length){
    for(int i=0; i<length; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

int CPF_validation(int icpf[]){
    int num[9] = {1,2,3,4,5,6,7,8,9};
    int sum = 0, mod = 0, flag1 = 0, flag2 = 0;

    //Digito 1
    for(int i=0; i<9; i++){
        sum += icpf[i] * num[i]; 
    }
    mod = sum%11;

    if(mod == 10){
        mod = 0;
    }
    if(icpf[9] == mod){
        flag1 = 1;
    }else{
        flag1 = 0;
    }

    //Digito 2
    sum = 0;
    for(int i=0; i<9; i++){
        sum += icpf[i+1] * num[i]; 
    }
    mod = sum%11;

    if(mod == 10){
        mod = 0;
    }

    if(icpf[10] == mod){
        flag2 = 1;
    }else{
        flag2 = 0;
    }

    return flag1*flag2;
}