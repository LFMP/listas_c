#include<stdio.h>

struct galera{
	int cpf;
	float altura, peso;
	char nome[20], sexo;
	float IMC;

};
int main(){
	int n, men =1, cpf;
	printf("Digite a quantidade de pessoas: \n");
	scanf("%d",&n);
	struct galera pessoa[n];
	for (int i = 0; i < n; i++){
		printf("Pessoa %d\n", i+1);
		printf("Sexo: ");
		scanf(" %c", &pessoa[i].sexo);
		printf("Nome: ");
		scanf(" %[^\n]s",pessoa[i].nome);
		printf("CPF: ");
		scanf("%d", &pessoa[i].cpf);
		printf("Altura: ");
		scanf("%f", &pessoa[i].altura);
		printf("Peso: ");
		scanf("%f", &pessoa[i].peso);
		pessoa[i].IMC= pessoa[i].peso/(pessoa[i].altura * pessoa[i].altura);
	}
	while(men != 0){
		printf("[1]Buscar pessoa por CPF\n");
		printf("[0]Sair\n");
		scanf("%d", &men);
		if (men = 0){
			break;
		}else{
			printf("Digite o CPF: ");
			scanf("%d", &cpf);
			for (int j = 0; j < n; ++j){
				if (cpf == pessoa[j].cpf){
					printf("%f\n", pessoa[j].IMC);
				}
			}
		}
	}
}