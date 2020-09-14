#include <iostream>

using namespace std;

int main()
{
	double altAluno = 0, num = 0, maior = 0, menor = 99999, numMaior = 0, numMenor = 0;
	
	for (int i=1; i < 11; i++){
		cout << "Numero do aluno: ";
		cin >> num;
		cout << "Altura do aluno(centimetros): ";
		cin >> altAluno;
		
		if (tam_aluno > maior){
			maior = altAluno;
			numMaior = num;
		}
		
		if (alt_aluno < menor){
			menor = altAluno;
			numMenor = num;
		}
	}
	cout << "O maior aluno e o numero " << numMaior << " com " << maior << " centimetros de altura." <<endl;
	cout << "O menor aluno e o numero " << numMenor << " com " << menor << " centimetros de altura." <<endl;
	
	return 0;
}