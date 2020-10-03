#include <iostream>
#include <string.h>

using namespace std;

#define T 365
int main()
{
	float temp[T];
	float min = 0, max = 0;
	int i = 0, qtdFrio = 0;
	float media = 0, soma = 0;

	for(i = 0; i < T; i++)
	{
		cout << "Temperatura do dia " << i + 1 << ": ";
		cin >> temp[i];
	}

	min = temp[0];
	max = temp[0];

	for(i = 0; i < T; i++)
	{
		soma += temp[i];

		if (temp[i] < min)
		{
			min = temp[i];
		}
		if (temp[i] > max)
		{
			max = temp[i];
		}
	}
	media = soma / T;

	for(i = 0; i < T; i++)
	{
		if (temp[i] < media)
		{
			qtdFrio++;
		}
	}

	cout << endl;

	cout << "Informação: " << endl;
	cout << "Temperatura menor: " << min << endl;
	cout << "Temperatura maior: " << max << endl;
	cout << "Temperatura media: " << media << endl;
	cout << "dias com temperatura abaixo da media: " << qtdFrio << endl;a
