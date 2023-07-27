#include <bits/stdc++.h>
using namespace std;
const int MAX = 500+10;
char matriz[MAX][MAX];

int main ()
{
    int N, F, trocar;
    // entrada
    cin >> N >> F;
    for(int i = 0; i<N; i++)
    {
        cin >> matriz[i];
    }
    // verificar lava
    if(matriz[0][0]-48 <= F)
    {
        matriz[0][0] = '*';
        do{
            trocar = 0;
            for(int i = 0; i<N; i++)
            {
                for (int j =0; j<N; j++)
                {
                    if((matriz[i][j] != '*')  and  (matriz[i][j]-48 <= F) and
                        ((matriz[i-1][j] == '*') or (matriz[i+1][j] == '*') or
                        (matriz[i][j+1] == '*') or  (matriz[i][j-1]=='*')) )
                    {
                        matriz[i][j] = '*';
                        trocar = 1;
                    }
                }
            }
        }while(trocar ==1);

    }

    // saida
    for(int i = 0; i<N; i++)
    {
        for (int j =0; j<N; j++)
        {
            cout << matriz[i][j];
        }
        cout<< endl;
    }

    return 0;
}
