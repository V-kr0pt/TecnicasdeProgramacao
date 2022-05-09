#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void CPF_str2int(string , int []);
void showArray(int [], int);
int CPF_validation(int []);

int main(){ 
    const int N = 10; //quantidade de CPFs no arquivo     
    string arc_name; //nome do arq que estão os CPFs 
    string scpf; //cpf em formato string
    int icpf[11]; //cpf como um array de inteiros
    int valid; //flag de validação do CPF
    ifstream input; //canal para arq de entrada
    ofstream output; //canal para arq de saída

    //abre o arquivo a ser lido
    do{
        cout << "Digite o nome do arquivo que estão os CPF a serem validados" << endl;
        cout << "Ex: teste.txt" << endl;
        getline(cin, arc_name);
        input.open(arc_name);
        if(!input){
            cout << "\nO arquivo não pode ser aberto ou é inexistente." << endl;
            cout << "-----Tente novamente.-----\n" << endl;
        }
    }while(!input);

    cout << "\n---O arquivo foi aberto corretamente.---\n" << endl;

    //cria o arquivo de saída
    output.open("cpfs_validos.txt");    
    if(!output){
        cout << "Algum problema ocorreu durante a criação do arquivo de saída" << endl;
        return 1;    
    }
     
    for(int i=0; i<N; i++){
        //pega o CPF do arquivo
        getline(input, scpf); 
        //verifica se o CPF é válido 
        CPF_str2int(scpf, icpf);
        //valida o cpf e retorna a flag 
        valid = CPF_validation(icpf);
        if(valid){
            cout << "O CPF da linha " << i+1 << " é válido" << endl;
            output << scpf << endl;
        }else{
            cout << "O CPF da linha " << i+1 << " é inválido" << endl;
        }  
    }
    
    cout << "\n---O arquivo 'cpfs_validos.txt' foi criado corretamente---\n" << endl;
    input.close();
    output.close();
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
