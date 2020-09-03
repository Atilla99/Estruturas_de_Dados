#include <iostream>
using namespace std;

int main()
{
	float sal, reajuste, salReajustado;
	cout<<"Digite o salario"<<endl;
	cin>>sal;

		if(sal < 1000)
	{
		reajuste = 15/100*sal;
		salReajustado = sal+reajuste;	
		cout << "Salario a Receber: " << salReajustado;
	}	
		if((sal >= 1000) && (sal <= 1500))
	{
		reajuste = 10/100*sal;
		salReajustado = sal+reajuste;	
		cout << "Salario a Receber: " << salReajustado;
	}
		else(sal >=1500);
	{
		reajuste = 5/100*sal;
		salReajustado = sal+reajuste;	
		cout << "Salario a Receber: " << salReajustado;
	}

  return 0;
	
}