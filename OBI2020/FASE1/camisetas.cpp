#include <iostream>
using namespace std;

int main(){
	 int n_premiados, tamanho, qtd_p =0, qtd_m =0;
	 cin>> n_premiados;
	 for(int i = 1; i <= n_premiados; i++){
	 	 cin >> tamanho;
	 	 if(tamanho == 1){
	 	 	qtd_p++;
		  } 
	
	 	 else if(tamanho == 2) {
	 	  	qtd_m++;
		  }
		  	
	 } 
	 
	 int p_prod, m_prod;
	 cin>> p_prod>> m_prod;
	 if((p_prod == qtd_p )&&( m_prod == qtd_m)){
	   	cout << "S"<< endl;	
	 }
	 else{
	 	cout << "N" << endl;
	 }
	
		
    return 0;
}
