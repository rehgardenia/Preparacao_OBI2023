#include <bits/stdc++.h>
#define MAX 110
using namespace std;

vector<int> tempo(MAX, 0);
vector<bool> vacuo(MAX,false); //0-false , 1- true

int main()
{
    char evento;
    int n, x;
    cin >> n;

    for(int i=0; i < n; i++ )
    {
        cin>> evento >> x;
        if(evento == 'R')
        {
            vacuo[x] = true;
            for(int i=0; i < MAX; i++ )
            {
                if(vacuo[i]) tempo[i] +=1;
            }
        }
        if(evento == 'E')
        {
            vacuo[x] = false;
            for(int i=0; i < MAX; i++ )
            {
                if(vacuo[i]) tempo[i] +=1;
            }
        }
        if(evento == 'T')
        {
            for(int i=0; i < MAX; i++ )
            {
                if(vacuo[i]) tempo[i] += x-1;
            }
        }
    }

    //SAIDA
     for(int i=0; i < MAX; i++ ){
        if(tempo[i]!= 0 && vacuo[i] == false)
            cout << i <<" " << tempo[i]<< endl;
        else if(vacuo[i] == true)
            cout << i << " " <<-1 << endl;
     }

    return 0;
}
