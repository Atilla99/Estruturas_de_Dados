#include <iostream>
using namespace std;

int main()
{
	float Pag, valor, Desc, Acres, Dv1, Dv2;
	int op;
	cout<<"Digite o valor da compra"<<endl;
	cin>>valor;
	cout<<"Digite a forma de pagamento"<<endl;
	cout<<"1 - a vista  em dinheiro"<<endl;
	cout<<"2 - a vista com cartao"<<endl;
	cout<<"3 - em 2 vezes"<<endl;
	cout<<"4 - em 3 vezes"<<endl;
	cin>>op;
	switch(op)
	{
		case '1':
			Desc = 10/100*valor;
			Pag = valor - Desc;
			cout<<"Você Pagara com dinheiro: " << Pag << "com 10% de desconto"<<endl;
			break;
		case '2':	
			Desc = 5/100*valor;
			Pag = valor - Desc;
			cout<<"Você Pagara no cartão:" << Pag << "com 5% de desconto"<<endl;	
			break;
		case '3':
			Dv1=valor/2;
			cout<<"Você Pagara 2 parcelas de: " << Dv1 <<endl;	
			break;			
		case '4':
			Acres = 10/100*valor;
			Pag = valor + Acres;
			Dv2 = Pag / 3;
			cout<<"Você Pagara com dinheiro: " << Dv2 << "com 10% de Acrescimo"<<endl;
				
	}
	
	
	return 0;
}