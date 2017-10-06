#include <stdio.h>

int main(){
	int n_pirralho, meses, piam=0, piaf=0;
	char sexo;
	float pmas, pfem, ptotal;
	printf("Digite qtd de nascidos: ");
	scanf("%i", &n_pirralho);
//mortalidade infantil = (pifo_antes_de_um_ano/vivas)*100
	for (int i=0; i < n_pirralho; i++){

		printf("Digite o sexo: ");
		scanf(" %c", &sexo);
		printf("Digite qtd meses: ");
		scanf("%i", &meses);

		if (meses < 24){
			if (sexo == 'F'){
				piaf++;
			}else{
				piam++;
			}
		}
	}
	pmas = piam*100/n_pirralho;
	pfem = piaf*100/n_pirralho;
	ptotal = (piam+piaf/n_pirralho)*100;
	//a
	printf("porcentagem fem. mortas: %.2f %\n", pmas);
	//b
	printf("porcentagem mas. mortas: %.2f %\n", pfem);
	//c
	printf("Total : %.2f %\n", ptotal);

	return 0;
}