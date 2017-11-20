#include<stdio.h>

struct banco{
	int cpf;
	float saldo;
	char nome[20];
};

int main(){
	int men = 1, cpfzao;
	float grana;
	struct banco conta[3];
	for (int i = 0; i < 3; i++){
		printf("conta %d\n", i+1);
		printf("Nome: ");
		scanf(" %[^\n]s",conta[i].nome);
		printf("CPF: ");
		scanf("%d", &conta[i].cpf);
		printf("Depósito inicial: ");
		scanf("%f", &conta[i].saldo);
	}
	while(men != 0){
		printf("[1]Buscar conta por cpf\n");
		printf("[0]Sair\n");
		scanf("%d", &men);
		if (men = 0){
			break;
		}else{
			printf("Digite o cpf: ");
			scanf("%d", &cpfzao);
			for (int j = 0; j < 3; ++j){
				if (cpfzao == conta[j].cpf){
					printf("Deposito/ Saque: R$ ");
					scanf("%f", &grana);
					conta[j].saldo += grana;
					printf("Titular: %s\t", conta[j].nome);
					printf("Saldo: R$ %.2f\n", conta[j].saldo);
				}
			}
		}
	}
}