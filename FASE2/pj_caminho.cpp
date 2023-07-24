#include <bits/stdc++.h>
#define MAX 500000+10

using namespace std;

int lampadas[MAX];
int ruasEscuras[MAX] = {0};
int N;

int main()
{
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin>> lampadas[i];
    }
    lampadas[N] = lampadas[0];

    for(int i = 0; i <N; i++)
    {
        if(lampadas[i]+ lampadas[i+1] < 1000)
        {
            ruasEscuras[i]= 1;
        }
    }
    int resp =0, tam=0;

    for(int i = 0; i < N; i++)
    {
        if(ruasEscuras[i]== 1){
            tam++;
        }else{
            tam=0;
        }
        resp = max(resp,tam);
    }
    resp =  min(resp, N);
    cout<< resp << endl;

    return 0;
}
