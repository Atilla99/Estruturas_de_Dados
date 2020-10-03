#include <iostream>
#include <string.h>

using namespace std;

#define T 10
int main()
{
	int A[T], M[T];
	int i = 0;
	int y = 0;
	for (i = 0; i < T; i++)
	{
		cout << "Valor " << i + 1 << ": ";
		cin >> A[i];
	}
	cout << "Multiplicar por: ";
	cin >> y;

	for (i = 0; i < T; i++)
	{
		M[i] = A[i] * y;
	}

	for (i = 0; i < T; i++)
	{
		cout << "Novo valor " << i + 1 << ": " << M[i] << endl;
	}
}
