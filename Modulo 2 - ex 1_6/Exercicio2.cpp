#include <iostream>

using namespace std;

#define NOTAS 20

float mediaValor(float v[], int t)
{
	float soma = 0;
	for (int i = 0; i < NOTAS; i++)
	{
		soma += v[i];
	}
	return soma / t;
}

int main()
{
	float v[NOTAS], acima = 0;
	float media;

	for (int i = 0; i < NOTAS; i++)
	{
		cout << "Digite a nota " << i + 1 << ": ";
		cin >> v[i];
	}

	media = mediaValor(vet, NOTAS);
	cout << "Media: " << media << endl;

	for (int i = 0; i < NOTAS; i++)
	{
		if (v[i] > media)
		{
			acima++;
		}
	}
	cout << "Valores Acima da Media: " << acima << endl;

	return 0;
}
