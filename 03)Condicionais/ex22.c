#include<stdio.h>

int main() {
	float salm=937.00, com, bruto;
	int pecas;
	scanf("%d", &pecas);

	if(pecas<=30){
		printf("O funcionário montou %d peças.\n", pecas);
		printf("Seu salário é R$ %.2f\n", salm);
	}else{
		if(pecas>=31 && pecas<=35){
			com=(pecas-30)*0.03*salm;
			bruto=salm+com;
			printf("O funcionário montou %d peças.\n", pecas);
			printf("O valor de comissão é R$ %.2f\n", com);
			printf("O salário bruto do funcionário é R$ %.2f\n", bruto);
		}else{
			com=(pecas-30)*0.05*salm;
			bruto=salm+com;
			printf("O funcionário montou %d peças.\n", pecas);
			printf("O valor de comissão é R$ %.2f\n", com);
			printf("O salário bruto do funcionário é R$ %.2f\n", bruto);
		}
	}
	return 0;	
}