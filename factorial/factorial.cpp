//programa para calcular el factorial de un número
#include <iostream>
using namespace std;
int main()
{
   int n,i;
   long double factorial;
   cout << "Introduce un numero: ";
   cin >> n;
   factorial=1;
   for(i=1;i<=n;i++)
        factorial = factorial * i;
   cout << endl << "Factorial de " << n << " es: " << factorial << endl;
}
