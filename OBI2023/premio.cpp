#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int bolos, paes, doces, soma;
    char resposta;

    cin>> paes >> doces >> bolos;

    soma = (paes * 1) + (doces *2) + (bolos*3);

    if(soma >= 150) resposta = 'B';
    else if( soma >= 120) resposta = 'D';
    else if(soma >= 100) resposta = 'P';
    else resposta = 'N';

    cout << resposta << endl;

    return 0;
}
