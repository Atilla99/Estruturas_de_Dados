#include <iostream>
#include <iomanip>

using namespace std;

int main(int)
{
	int voto = 0,opc = 0;
	float x=0,y=0,vtbr=0,vtnul=0,qatd=0;

	while (opc == 0)
	{
		cout << "Selecione a opcao de voto"<<endl<<"1 - Candidado A"<<endl<<"2 - Candidato B"<<endl<<"3 - Voto Nulo"<<endl<<"4 - Voto em Branco"<<endl<<"0 - Sair"<<endl<<"--------------   ";
		cin >> voto;

		switch (voto)
		{
		case 1:
			x++;
			qatd++;
			cout<<"voto Concluido!"<<endl<<endl;
			break;

		case 2:
			y++;
			qatd++;
			cout<<"voto Concluido!"<<endl<<endl;
			break;

		case 3:
			vtnul++;
			qatd++;
			cout<<"voto Concluido!"<<endl<<endl;
			break;

		case 4:
			vtbr++;
			qatd++;
			cout<<"voto Concluido!"<<endl<<endl;
			break;

		case 0:
			opc = 1;
			cout<<"processando calculos, aguarde"<<endl<<endl;
			break;

		default:
			cout << "Erro!" << endl;
		}
	}

	float ca = (x/qatd)*100;
	cout << "Percentual de votos do Candidato A: " << ca << "%" << endl;

	float cb =(y/qatd)*100;
	cout << "Percentual de votos do Candidato B: " << cb << "%" << endl;

	float cvn = (vtnul/qatd)*100;
	cout << "Percentual de votos nulos: " << cvn << "%" << endl;

	float cvb = (vtbr/qatd)*100;
	cout << "Percentual de votos em branco: " << cvb << "%" << endl;

	return 0;

}