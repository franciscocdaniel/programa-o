#include<iostream>
#include<locale.h>
void main() {
	setlocale(LC_ALL, "portuguese");
	using namespace std;
	int n;
	do
	{
	cout << "diz um numero: ";
	cin >> n;
	if (n>0)
	{
		cout << "O n�mero � positivo\n";
	}
	else
	{
		cout << "numero negativo\n";
	}
	
	} while (n !=0);
}
