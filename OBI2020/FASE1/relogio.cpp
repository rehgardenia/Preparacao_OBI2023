#include<bits/stdc++.h>
using namespace std;
int main(){
	int freq_repouso, freq_atual ,oxig_atual;
	
	cin >> freq_repouso >> freq_atual>> oxig_atual;
	
	if((freq_atual > 3* freq_repouso ) || (oxig_atual < 95)){
		cout << "diminuir";
	}
	else if((freq_atual < 2* freq_repouso ) && (oxig_atual > 97)){
		cout << "aumentar";
	}
	else{
		cout << "manter";
	}
	
	return 0;
}
