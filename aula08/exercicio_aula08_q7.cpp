#include <iostream>
#include <cstring>

using namespace std;

string str_lower(string);

int main(){
    //"a" array de strings para armazenar as palavras; 
    //"temp" espaço de memória para troca de posição;
    string A,B,C,temp;

    //flag que indicará se a palavra vem antes em ordem alfabética
    int flagAB, flagAC, flagBC;

    //recebendo as 3 palavras do usuário
    getline(cin, A);
    getline(cin, B);
    getline(cin, C);

    //garantindo que todas estejam em minúsculo
    A = str_lower(A);
    B = str_lower(B);
    C = str_lower(C);
   
    // rearranjando a posição das palavras no vetor    
    flagAB = strcmp(A.c_str(),B.c_str());
    flagBC = strcmp(B.c_str(),C.c_str());
    flagAC = strcmp(A.c_str(),C.c_str());

    if(flagAB < 0 and flagAC < 0){
        if(flagBC < 0){
            //A B C
            cout << A << endl;
            cout << B << endl;
            cout << C << endl;
        }else{
            //A C B
            cout << A << endl;
            cout << C << endl;
            cout << B << endl;
        }
    }

    if(flagAB > 0 and flagBC < 0){
        if(flagAC < 0){
            //B A C
            cout << B << endl;
            cout << A << endl;
            cout << C << endl;
        }else{
            //B C A  
            cout << "B C A" << endl;
            cout << B << endl;
            cout << C << endl;
            cout << A << endl;
        }
    }

    if(flagAC > 0 and flagBC > 0){
        if(flagAB < 0){
            //C A B
            cout << C << endl;
            cout << A << endl;
            cout << B << endl;
        }else{
            //C B A  
            cout << C << endl;
            cout << B << endl;
            cout << A << endl;
        }

    }
       

    
    return 0;
}

string str_lower(string A){
    //transforma tudo para uma string minúscula.
    for(int i=0; i<A.length(); i++)
        A[i] = tolower(A[i]);      
    return A;
}