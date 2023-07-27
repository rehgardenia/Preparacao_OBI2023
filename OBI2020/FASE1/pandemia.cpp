#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000+10;

int participantes[MAX];
bool infectados[MAX];

int main(){
    int  n_amigos, n_reuniao;
    cin >> n_amigos >> n_reuniao;
    int infectado, primeira_reuniao;
    cin >> infectado >> primeira_reuniao;
    for(int i = 1; i <= n_reuniao; i++){
        if(i == primeira_reuniao)
                infectados[infectado] = true;

        int n_participantes;
        cin >> n_participantes;
        bool tem_infectados =false;
        for (int j =0 ; j < n_participantes; j++){
            cin >> participantes[j];
            if(infectados[ participantes[j]])
                tem_infectados = true;
        }
        if(tem_infectados){
            for (int j =0 ; j < n_participantes; j++){
            infectados[participantes[j]] = true;
          }
        }
    }
     int total = 0;
     for(int x =0; x <= n_amigos; x++){
        if(infectados[x])
            total++;
     }
     cout<< total << endl;

    return 0;
}
