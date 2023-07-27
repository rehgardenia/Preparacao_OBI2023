#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int infectados, reprodutor, max_infectados;
    cin >> infectados >> reprodutor >> max_infectados;

    int dias = 0;
    int pessoas = infectados; // dia 0
    int soma = pessoas;

    while(soma < max_infectados)
    {
        pessoas = pessoas * reprodutor;
        soma += pessoas;
        dias++;
    }
    cout << dias << endl;

    return 0;
}
