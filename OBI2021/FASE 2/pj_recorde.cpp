#include <bits/stdc++.h>
using namespace std;

int R, M,L;

int main (){

     cin>> R>>M>>L;
     string rm,ro;

     if(M>R) rm = "RM";
     else rm ="*";

     if(L > R) ro = "RO";
     else ro = "*";

    cout << rm << endl;
    cout << ro << endl;

    return 0;
}
