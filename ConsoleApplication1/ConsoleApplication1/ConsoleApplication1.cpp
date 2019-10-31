#include<iostream>
#include<string>
using namespace std;
void menu();
int suma();
int resta();
int multi();
int division();
void pausa();

int main()
{

	menu();
	return 0;
}

void menu()
{
	bool bandera = false;
		char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "calculadora con funciones" << endl;
		cout << "-------------------------" << endl;
		cout << "\t1.- sumar " << endl;
		cout << "\t2.- restar " << endl;
		cout << "\t3.- multiplicar " << endl;
		cout << "\t4.- dividir " << endl;
		cout << "\t5.- salir " << endl;
		cout << "elije una opcion:";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
				system("cls");
				cout << "has elejido sumar\n";
				suma();
				break;
		case '2':
					system("cls");
					cout << "has elejido restar\n";
					resta();
					break;
		case '3':
						system("cls");
						cout << "has elejido multiplicar\n";
						multi();
						break;
		case '4':
							system("cls");
							cout << "has elejido dividir\n";
							division();
							break;
		case '5':
								bandera = true;
								break;

		default:
								system("cls");
								cout << "opcion no valida" << endl;
								pausa();
								break;

		}
	} while (bandera != true);

}
void pausa()
{
	cout << "pulsa una tecla para continuar";
	getwchar();
	getwchar();
}
int suma()
{
	int a, b, suma;
	cout << "primer valor:";
	cin >> a;
	cout << "segundo valor:";
	cin >> b;
	suma = a + b;
	cout << "la suma es: " << suma;
	pausa();
	return 0;

}
int resta()
{
	int a, b, resta;
	cout << "primer valor:";
	cin >> a;
	cout << "segundo valor:";
	cin >> b;
	resta = a - b;
	cout << "la resta es: " << resta;
	pausa();
	return 0;
}
int multi()
{
	int a, b, multi;
	cout << "primer valor:";
	cin >> a;
	cout << "segundo valor:";
	cin >> b;
	multi = a * b;
	cout << "la multiplicacion es: " << multi;
	pausa();
	return 0;
}
int division()
{
	int a, b, div;
	cout << "primer valor:";
	cin >> a;
	cout << "segundo valor:";
	cin >> b;
	div = a/b;
	cout << "la division es: " << div; 
	pausa();
	return 0;
}