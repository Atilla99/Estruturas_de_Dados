#include <iostream>
#include <string.h>

using namespace std;


int main()
{
	int L = 0;
	cout << "Tamanho dos vetores: ";
	cin >> L;
	int i = 0;

	int A[L], B[L], Soma[L];

	cout << "1º Vetor" << endl;
	for(i = 0; i < L; i++)
	{
		cout << "Valor " << i + 1 << ": ";
		cin >> A[i];
	}

	cout << endl;

	cout << "2º Vetor" << endl;
	for(i = 0; i < L; i++)
	{
		cout << "Valor " << i + 1 << ": ";
		cin >> B[i];
	}


	for(i = 0; i < N; i++)
	{
		Soma[i] = A[i] + B[i];
	}

	cout << endl;
	cout << "Total dos Vetores" << endl;
	for(i = 0; i < L; i++)
	{
		cout << A[i] << " + " << B[i] << " = " << Soma[i] << endl;
	}