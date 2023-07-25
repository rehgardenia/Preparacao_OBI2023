#include <bits/stdc++.h>
# define MAX 510
using namespace std;

char v[MAX];
int n;

int main(){
    cin>> n;
    cin >> v;
    int resp =0;
    //cout<< caracteres;
    for(int i = 0;i < n;i++){
        int aux = 1;
        int sz = 1;

        for(int j = i-1;j >= 0;j--){
            if(v[i-sz] != v[i+sz]) break;
            aux += 2;
            sz++;
        }

        resp = max(resp, aux);
    }

    //palindromos de tamanho par

    for(int i = 0;i < n;i++){
        int aux = 0;
        int sz = 0;

        for(int j = i;j >= 0;j--){
            if(v[i-sz] != v[i+sz+1]) break;
            aux += 2;
            sz++;
        }

        resp = max(resp, aux);
    }

    cout << resp << "\n";
    return 0;
}

