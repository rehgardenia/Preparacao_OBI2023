#include <bits/stdc++.h>
#define MAX 10000+10

using namespace std;
string pessoa[MAX];
int lance[MAX];
int n_lances, maior_lance;

int main(){
     cin >> n_lances;
     for(int i =0; i < n_lances; i++){
        cin >> pessoa[i];
        cin >> lance[i];
	 }
	 maior_lance = 0;
     for(int i = 1; i <=  n_lances ; i++){
	   if(lance[i] > lance[maior_lance])
            maior_lance = i;
	 }
     cout << pessoa[maior_lance] << endl;
     cout << lance[maior_lance]  << endl;

    return 0;
}
