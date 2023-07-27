#include <iostream>
#include <vector>
using namespace std;


char c_dominante;

int valorCarta(string carta){
    //aspas
    if(carta[0] == 'A'){
            if(carta[1] == c_dominante)
                return 14;
            else
                return 10;
    }
    //valete
   if(carta[0] == 'J'){
            if(carta[1] == c_dominante)
                return 15;
            else
                return 11;
    }
    //dama
    if(carta[0] == 'Q'){
            if(carta[1] == c_dominante)
                return 16;
            else
                return 12;
    }
    //rei
    if(carta[0] == 'K'){
            if(carta[1] == c_dominante)
                return 17;
            else
                return 13;
    }
    return 0;
}

int main()
{

    string entrada;
    int totalL =0;
    int totalE =0;

    cin >> entrada;
    c_dominante = entrada[1];

    //cout<< "Naipe dominante: " <<c_dominante<< endl;

    //luana
    for (int i =0; i < 3; i++)
    {
        cin >> entrada;
        totalL += valorCarta(entrada);
       // cout << "Carta: "<< entrada[0]<< endl;
       // cout << "Naipe: "<< entrada[1]<< endl;
    }
    //edu
    for (int i =0; i < 3; i++)
    {
        cin >> entrada;
        totalE += valorCarta(entrada);
       // cout << "Carta: "<< entrada[0]<< endl;
       // cout << "Naipe: "<< entrada[1]<< endl;


    }
//    cout << totalL << endl;
 //   cout << totalE << endl;
    if(totalL > totalE)
        cout << "Luana"<< endl;
    else if(totalE > totalL)
        cout << "Edu"<< endl;
    else
        cout << "empate"<< endl;

    return 0;
}
