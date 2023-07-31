#include <bits/stdc++.h>
using namespace std;

int N;
long long int  soma;
int n , p;

int main (){
    cin >> N;
    soma = 0;
    for(int i = 0; i < N ; i++){
        cin >> n;
        p = n%10;
        n /=10;

    int aux = 1;
       for (int j = 1; j <= p; j++){
            aux *=n;
       }
        soma +=aux;
    }
    cout << soma<< endl;

    return 0;
}
