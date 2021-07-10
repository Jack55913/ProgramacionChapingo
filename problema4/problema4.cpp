#include <iostream>

using namespace std;

int main()
{
    float n1, n2, s = 0, r = 0, m = 0, d = 0;

    cout << "Colega, saca un numero ";
    cin >> n1;
    cout << "Colega, saca otro numero ";
    cin >> n2;

    s = n1 + n2;
    r = n1 - n2;
    m = n1 * n2;
    d = n1 / n2;

    cout << "\n La suma es: " << s << endl;
    cout << "\n La resta es: " << r << endl;
    cout << "\n La multiplicacion es: " << m << endl;
    cout << "\n La division es: " << d << endl;

    return 0;
}