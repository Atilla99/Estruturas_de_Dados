#include <iostream>
#include <string.h>

using namespace std;

#define T 20
int main()
{
	int Valor[T];
	int i = 0;
	for (i = 0; i < T; i++)
	{
		cout << "Valor " << i + 1 << ": ";
		cin >> Valor[i];
	}
		cout << endl;
	for (i = T - 1; i >= 0; i--)
	{
		cout << "Valor " << i + 1 << ": " << Valor[i] << endl; 
	}
}
