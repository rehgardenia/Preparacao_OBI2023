#include <bits/stdc++.h>
#define MAX 510
using namespace std;
int main ()
{
    int chinelos[MAX];
    int n ;
   // cout << "Tamanhos"<< endl;
    cin >> n;
    for (int i = 1; i <= n ; i++){
        cin >> chinelos[i];
    }
    //cout << "Pedidos"<< endl;
    int p, pedido, compras;
    compras = 0;
    cin >> p;
    for (int j = 0 ; j < p;  j++){
        cin >> pedido;
      //  cout << pedido << "-" << chinelos[pedido] << endl;
        if(chinelos[pedido] != 0){
            chinelos[pedido]--;
            compras++;
        }
        //cout << compras << endl;
    }
    cout << compras << endl;

    return 0;
}
