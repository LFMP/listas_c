#include <stdio.h>

int main(){
	int i = 0, contm = 0;
	float altura, maiorA = 0, menorA = 3, alturaf = 0, contf = 0;
	char sexo;
	char maiorS;

	while(i<15){

		printf("Digite o sexo (M ou F): ");
		scanf(" %c", &sexo);
		printf("Digite a altura (x.xx): ");
		scanf("%f", &altura);

		if (altura > maiorA){
			maiorA = altura;
			maiorS = sexo;
		}
		if (altura < menorA){
			menorA = altura;
		}
		if (sexo == 'M'){
			contm++;	
		}else if (sexo == 'F'){
			contf++;
			alturaf += altura;
		}
		i+=1;
	}
	printf("Maior altura: %f - Menor altura: %f\n", maiorA, menorA);
	if (contf != 0){
		printf("Média da altura feminina: %f\n", alturaf/contf);
	}else{
		printf("Nenhuma mulher\n");
	}
	printf("%d homens\n", contm);
	printf("Sexo da pessoa mais alta: %c\n", maiorS);
	return 0;
}