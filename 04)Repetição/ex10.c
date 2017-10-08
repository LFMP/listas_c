#include <stdio.h>

int main(){

	int n_conta=1;
	float saldo, negativo = 0, pessoas=0, fodidos;

	while(n_conta > 0){

		printf("Digite o número da conta: ");
		scanf("%d", &n_conta);
		if (n_conta < 0){
			break;
		}
		printf("Digite o saldo: ");
		scanf("%f", &saldo);
	
		if(saldo >= 0){
			printf("Conta: %d\t Saldo: R$ %.2f\t - Positivo\n", n_conta, saldo);	
		} else {
			printf("Conta: %d\t Saldo: R$ %.2f\t - Negativo\n", n_conta, saldo);
			negativo++;
		}
		if (n_conta>0){
			pessoas++;
		}	
	}

	fodidos = (negativo/pessoas)*100;

	printf("Percentual de pessoas com saldo negativo %.2f %\n", fodidos);

	return 0;
}