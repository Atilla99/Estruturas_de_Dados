#include <iostream>
using namespace std;

int main()
{
	float salMin, imp, hrTrab, salBrut, salReceb, valHr;
	cout<<"Digite o salario minimo"<<endl;
	cin>>salMin;
	cout<<"Digite o numero de horas trabalhadas"<<endl;
	cin>>hrTrab;
	valHr= salMin/2;
	salBrut= hrTrab*valHr;
	imp=30/100*salBrut
	salReceb= salBrut-imp;
	cout << "Salario a Receber: " << salReceb;
  return 0;
	
}