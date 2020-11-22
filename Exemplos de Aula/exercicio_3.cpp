#include <iostream>
using namespace std;

int main()
{
	float salMin, imp, hrTrab, salBrut, salReceb, valHr;
	cout<<"Digite o salario minimo";
	cin>>salMin;
	cout<<"Digite o numero de horas trabalhadas";
	cin>>hrTrab;
	valHr= salMin/2;
	salBrut= hrTrab*valHr;
	salReceb= salBrut*0.97;
	cout << "Salario a Receber: " << salReceb;
  return 0;
	
}