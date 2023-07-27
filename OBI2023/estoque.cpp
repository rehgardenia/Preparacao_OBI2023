#include <bits/stdc++.h>
#define MAX 510
using namespace std;

//declarar variaveis
int estoque[MAX][MAX];
int tipo, tamanho;
int pedidos;
int linha, coluna;
int compras = 0;

int main(){
   // ler linha e coluna
    cin  >> tipo >> tamanho;
    // ler a matrixx estoque
    for (int i = 1; i <= tipo; i++){
        for (int j = 1; j <= tamanho; j++){
            cin >> estoque[i][j];
        }
    }
    // ler a qtd de pedidos
    cin >> pedidos;


    // ler o tipo e o tamanho do pedido
    // verificar se o estoque é suficente, assim realiza a compra e atualiza o estoque

    for (int i = 0; i < pedidos; i++){
       cin >> linha >> coluna;
       if(estoque[linha][coluna] >= 1 )
	   {
	    	compras++;
	    	estoque[linha][coluna]--;
	   }

    }
    // impimir a qtd de compras realizadas
    cout  << compras << endl;


    return 0;
}
