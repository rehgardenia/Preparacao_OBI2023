#include <bits/stdc++.h>

using namespace std;
int acheValor(int a){
    int somaN =0 ;
    while(a > 0)
    {
        //cout << a%10 << endl;
        somaN+= a%10;
        a= a/10;
    }
    //cout << soma << endl;
    return somaN;

}
int main()
{
    int n_menor, n_maior, soma;
    int resp = 0;
    cin >> n_menor >> n_maior >> soma;
    for(int i = n_maior; i >= n_menor; i--){
        if(acheValor(i) == soma) {
            resp = i;
            break;
        }
    }
    if(resp == 0){
        cout << -1 << endl;
    }else {
        cout << resp << endl;
    }


    return 0;
}
