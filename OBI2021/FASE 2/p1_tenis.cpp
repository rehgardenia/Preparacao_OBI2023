#include <bits/stdc++.h>
using namespace std;

int a , b, c, d;
int resp = 0;
int main(){

    cin >>  a >> b  >> c>> d;


    int soma1 , soma2, soma3;
    soma1 =  abs((a + b) -(c + d));
    soma2 =  abs((a + c )- (b + d));
    soma3 =  abs((a + d )-(b + c));
    resp = min(soma1,min(soma2,soma3));

    cout << resp<< endl;

    return 0;
}
