#include <iostream>
#define MAX 100000+10
using namespace std;
int main(){
    //declar variaveis
    int seqA[MAX];
    int seqB[MAX];
    int a, b;

    // ler tamanho de cada sequencia
    cin >> a >> b;
    // ler sequencia A
    for(int ii = 0; ii < a; ii++ ){
        cin >> seqA[ii];
    }
    //ler sequencia B
    for(int jj = 0; jj < b; jj++ ){
        cin >> seqB[jj];
    }
    // veficar se a sequencia B esta em A
    int aux = 0;
    for(int x =0; x< a; x++){
        // se aux for menor que b e os indices forem iguais -- aumenta
        if(aux < b and seqA[x] == seqB[aux]){
            aux++;
        }
    }
    // imprimir  resultado
    if(aux == b)
        cout<< "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}
