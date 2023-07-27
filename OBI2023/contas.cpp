#include <bits/stdc++.h>
#define MAX 3
using namespace std;
int  valorVo, divida;
int contas_pagas  = 0;

int main(){
    cin  >> valorVo;
    for (int i = 0; i < MAX; i++){
        cin >> divida;
        if( valorVo >=  divida ){
               contas_pagas += 1;     
				valorVo -= divida;			           
        }
    }
    cout << contas_pagas << endl;

    return 0;
}

