#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, resp = 0; 
    cin >> n;
    for (int i = n +1; i >= 0; i --){
        resp += i;
    }
    cout << resp << endl;
    return 0;
}
