#include <iostream>
using namespace std;

int main(){
	float altura, peso, imc;
	cout << "Digite a altura ";
	cin >> altura;
	cout << "Digite o peso ";
	cin >> peso;
	
	imc = peso/(altura*altura);
	
	if(imc < 20)
	{
		cout<<"Abaixo do peso!"<<endl;	
	}	
	if(imc<25)
	{
		cout<<"Peso Ideal!"<<endl;
	}
	else(imc>25);
	{
		cout<<"Acima do Peso!"<<endl;
	}
	return 0;
}