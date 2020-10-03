#include <iostream>
#include <stdio.h>

using namespace std;

#define T 11

void encontra(string vet[T], string nome)
{
	for (int i = 0; i < T; i++)
	{
		if (vet[i] == nome)
		{
			cout << "encontrou";
		}
		else
		{
			cout << "nao encontrou";
		}
	}
}

int main()
{
	string localiza;
	string nomes[T];

	for (int i = 0; i < T; i++)
	{
		cout << "Digite nome: ";
		cin >> nomes[i];
	}

	cout << "";
	cout << "Verifique se um nome foi digitado. Digite o nome que procura: ";
	cin >> localiza ;

	encontra(nomes, localiza);

	return 0;
}
