#include <bits/stdc++.h>
# define MAX 500000+10
using namespace std;
int main(){
    int postes[MAX];
    int trecho_escuro = 0;
    int N;
    cin>> N;
    for(int i = 0; i < N; i++){
        cin>> postes[i];
    }
    for(int i = 0; i < N; i++){
        if(i < N-2){
            if (postes[i] + postes[i+1] < 1000)
                trecho_escuro++;
        }
        else{
            if (postes[i] + postes[0] < 1000)
                trecho_escuro++;
        }
    }
    cout << trecho_escuro << endl;

    return 0;
}
