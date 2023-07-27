#include<iostream>
using namespace std;

int main(){
	int dist, resp;
	cin >> dist;
	resp = (dist -3) %8;
	if(resp == 3) cout<< 1;
	else if (resp == 4) cout <<2;	
	else cout<< 3;
	
	return  0;
}
