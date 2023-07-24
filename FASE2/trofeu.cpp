#include <bits/stdc++.h>
#define max 5
using namespace std;
int main(){
    int pontuacao[max+1];
    int maior = 0;
    int maior2= 0;
    int trofeus =0 ,placas =0;

    int aux =0;
    for (int i= 1; i <= max ; i++ ){
        cin >> pontuacao[i];
        if(i == 1)
            maior= pontuacao[i];
        if( aux == 0 and pontuacao[i]!= maior){
            aux = i;
        }
        maior2 = pontuacao[aux];

        if(pontuacao[i] == maior)
            trofeus++;
        if(pontuacao[i] == maior2)
            placas++;
     }
        cout << trofeus<< " "<< placas << endl;
    return 0;
}
