#include<iostream>
using namespace std;

int main()
{
    int id_otavio, id_orlando , id_oscar;
    // oscar+x  otavio+x orlando
    //cout << id_otavio- id_oscar << " - " <<id_orlando -id_otavio; 
    cin>> id_oscar >> id_otavio;
    id_orlando = id_otavio + (id_otavio-id_oscar);
    cout<< id_orlando;
    return 0;
}
