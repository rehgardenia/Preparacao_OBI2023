# include <bits/stdc++.h>
using namespace std;
int main(){
    string mensagem;
    getline(cin, mensagem);
    int feliz = 0;
    int triste = 0;
    for(int i  = 0; i+2  < mensagem.size(); i++){
        if(mensagem[i] == ':' && mensagem[i+1] == '-' && mensagem[i+2] == ')' ) feliz++;
        if(mensagem[i] == ':' && mensagem[i+1] == '-' && mensagem[i+2] == '(' ) triste++;
    }
    if( feliz > triste) cout << "divertido"<< endl;
    else if(feliz < triste ) cout << "chato" << endl;
    else cout<< "neutro"<< endl; 
    
    
    return 0;
}