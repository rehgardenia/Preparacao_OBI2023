#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , aux ;
    vector <int> precos;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> aux;
        precos.push_back(aux);
    }
    sort(begin(precos), end(precos));
    reverse(precos.begin(), precos.end()); 

    int total = 0 ;
    for ( int i = 0  ; i < n; i++)
    { 
        if(i %3 == 2)
        {   
            cout << i << "*" << endl;
            continue;
        }
        total+= precos[i];
    }
    cout << total << endl;

    return 0;
}
