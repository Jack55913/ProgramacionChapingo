#include <iostream>
using namespace std;

long fact(int n)
{
    if (n == 1) // Aseguramos que termine
        return 1;

    return n * fact(n - 1); // Si no es 1, sigue la recursión
}

int main()
{
    int num;
    cout << "Introduzca un número entero: ";
    cin >> num;
    cout << "Su factorial es: " << fact(num) << endl;

    return 0;
}