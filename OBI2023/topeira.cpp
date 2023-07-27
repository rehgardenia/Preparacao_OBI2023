#include <bits/stdc++.h>
#define MAX 1000+10

using namespace std;

// declarei as variaveis
int n_saloes, n_tuneis, n_sugestoes;
int x, y ;
int tuneis[MAX][2]; // lin = rotas col = x, y
int passeios[MAX][MAX]; // lin = sugestoes colo = saloes


bool verificar( int sugs, int saloes)
{
    bool aux2 = false;

    for (int i =0 ; i < n_tuneis; i++)
    {
        //cout << "*" <<tuneis[i][0] << tuneis [i][1] << endl;
        if((tuneis[i][0] == passeios[sugs][saloes-1] and tuneis[i][1] ==  passeios[sugs][saloes]) or
            (tuneis[i][1] == passeios[sugs][saloes-1] and tuneis[i][0] == passeios[sugs][saloes]) )
        {
            aux2 = true;
        }
    }
    // cout << passeios[sugs][saloes-1] << passeios[sugs][saloes]<< endl;
     //cout << aux2 << endl;
    return aux2;

}
int main()
{
    // entrada dos tuneis ligados aos saloes x e y
    cin >> n_saloes >> n_tuneis;
    for (int i =0; i < n_tuneis ; i++)
    {
        cin >> x >> y;
        tuneis[i][0] = x;
        tuneis[i][1] = y;
    }
    // entrada das sugestoes de passeios entre os saloes
    cin >> n_sugestoes;
    int n, salao;
    int resp = 0;
    bool aux;
    for (int i =0; i < n_sugestoes ; i++)
    {
        // ler sugestoes
        cin >> n;
        for (int j =0 ; j < n; j++)
        {
            cin >> passeios[i][j];
        }
        // verificar se os passeio sao possiveis de se realizar
        for (int j = 1 ; j < n; j++)
        {
            //cout << passeios[i][j] << endl;
            aux = verificar(i, j);
            if(aux == false)
                break;

        }
        //cout << aux << endl;
        if(aux == true) resp++;

    }
    //imprimir a qtd de passeios possiveis
    cout << resp << endl;

    return 0;
}
