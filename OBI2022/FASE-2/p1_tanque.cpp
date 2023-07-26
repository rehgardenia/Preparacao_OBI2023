#include <iostream>
using namespace std;
double  consumo = 0.0, distancia = 0.0, inicio = 0.0;
double resp = 0.0;
int main ()
{
  cin >> consumo >> distancia >> inicio;
  resp = (distancia/consumo) - inicio;
  std::cout.precision(1);
  std::cout << std::fixed << resp << endl;
  return 0;
}
