#include <iostream>
using namespace std;

int main()
{
	int saldo_inicial = 1000, opc;
	float extra, saldo = 0, retiro;

	cout << "\tPasar un dia con mi amiga en Cancun" << endl;
	cout << "1. Ingresar dinero a la cuenta" << endl;
	cout << "2. Retirar dinero de la cuenta" << endl;
	cout << "3. Salir de aquí" << endl;
	cout << "Opcion: ";
	cin >> opc;

	switch (opc)
	{
	case 1:
		cout << "\nIngrese dinero que desea abonar a su cuenta: ";
		cin >> extra;

		saldo = saldo_inicial + extra;
		cout << "\nSu dinero en cuenta es: " << saldo;
		//break;
	case 2:
		cout << "\n¿Cuanto dinero desea retirar?: ";
		cin >> retiro;

		if (retiro > saldo_inicial)
		{
			cout << "No cuenta con esa cantidad, no puede pasar otro dia con su amiga";
		}
		else
		{
			saldo = saldo_inicial - retiro;
			cout << "\nDiviertase con su amiga! su dinero de cuenta es: " << saldo;
			//break;
		}
	case 3:
		//break;
	dafault:
		cout << "Se equivoco de opcion de menu";
		//break;
	}
	return 0;
}