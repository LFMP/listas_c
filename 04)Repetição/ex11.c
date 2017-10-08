#include <stdio.h>

int main(){

	int n_conta=1, negativo = 0, pessoas=0;
	float saldo, agencia=0;
	char cliente[50];

	while((n_conta > 0 && n_conta < 10000) || n_conta != -999){

		printf("Digite o número da conta: ");
		scanf("%d", &n_conta);
		printf("Digite o nome do cliente: ");
		scanf("%s", cliente);
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
		agencia += saldo;	
	}

	printf("Total de clientes com saldo negativo: %d\n", negativo);
	printf("Total de clientes da agência: %d\n", pessoas);
	printf("Saldo da agência: R$ %.2f\n", agencia);

	return 0;
}