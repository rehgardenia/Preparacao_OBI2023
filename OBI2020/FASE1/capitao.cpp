#include <iostream>

using namespace std;

int main(){
    int moedas, n_marinheiros, capitao;
	cin >> moedas>> n_marinheiros;
	
	capitao = (moedas/ (n_marinheiros +2 ))*2 ;
	cout<< capitao;


    return 0;
}

