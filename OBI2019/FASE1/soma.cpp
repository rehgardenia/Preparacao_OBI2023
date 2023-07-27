	#include<iostream>
	#define MAX 500050
	using namespace std;
	int main(){
		int N, K, seq[MAX], i, j, soma;
		cin >> N>> K;
		long long int resp = 0;
		
		for ( i =1; i <= N;i++)
		{
			cin >> seq[i];				
		}
		
		
		for ( i =1; i <= N;i++)
		{
			soma = 0;	
			for (j = i; j <= N;j++)
			{
				soma += seq[j];
				if(soma == K)
					resp +=1 ;
			
			}
		}
		cout<< resp<< endl;
		return 0;
	}
