#include<iostream>
using namespace std;
const int  MAX = 5010;
int main(){
	
	int N;
	int cidadeA[MAX];
	int cidadeB[MAX];
	int linha[MAX];
	int resp = 2;
	
	cin >> N;
	
	for(int i = 0; i < N -2; i++){ // O(n)
     	 cin >> cidadeA[i] >> cidadeB[i] >> linha[i];
	}
	
	for (int i = 0; i < N ;i++){
		 if((linha[i] == 1 && linha[i-1] == 0 )  ) 
		 	resp +=2;
	}
	cout << resp;
	return 0;
}
