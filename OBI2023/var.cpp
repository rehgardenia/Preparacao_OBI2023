#include <iostream>
using namespace std;
int main(){
    //declarar  variaveis
    int x, y;
    //ler vaiaveis
    cin>> x >> y;
    // verificar se x e y estao dentro da area  e imprimir
    if((x <= 8 && x >= -8) && (y >= 0 && y <= 8)){
        cout << "S" << endl;
    }
    else {
        cout << "N"<< endl;
    }
    return 0;
}
