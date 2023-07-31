#include <bits/stdc++.h>
#define MAX 10010
using namespace std;

int s, n, m;
int resp;

bool algoritimos(int a){
    vector<int> num;
    int soma = 0;
    while(a>0)
    {
        num.push_back(a%10);
        a = a/10;
    }
    for(int i =0 ; i < num.size(); i++){
       soma += num[i];
    }

    if(soma == s){
        return true;
    }
    return false;

}

int main(){
    cin >> s >> n >> m;
    resp = 0;
    for(int i = n; i <= m; i++){
        // verifcar se a soma dos algoriticos da s e incrementar
       if(algoritimos(i)){
           resp++;
        }
    }
    cout << resp << endl;

    return 0;
}
