#include <bits/stdc++.h>
# define MAX 100

using namespace std;

int resp[MAX][MAX];
int N;

int main(){
    cin>> N;

    for(int k = 1; k <= N; k++){
        for(int i = k; i <= N-k+1; i++){
            for(int j= k; j <= N-k+1; j++){
                resp[i][j]++;
            }
        }
    }

    for(int i = 1; i <= N; i++){
            for(int j= 1; j <= N; j++){
                cout<<resp[i][j];
            }
            cout<< endl;
        }
    return 0;
}
