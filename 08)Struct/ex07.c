#include<stdio.h>

struct consumo{
	int pot;
	float tempo, comp;
	char nome[20];
};

int main(){
	int dias, men = 1;
	float comt=0;
	struct consumo eletro[5];
	for (int i = 0; i < 5; i++){
		printf("Eletrodomestico %d\n", i+1);
		printf("Nome: ");
		scanf(" %[^\n]s",eletro[i].nome);
		printf("Potencia: ");
		scanf("%f", &eletro[i].pot);
		printf("Tempo ativo por dia em horas: ");
		scanf("%d", &eletro[i].tempo);
		eletro[i].comp = eletro[i].tempo * eletro[i].pot;
	}
	printf("Qtd de dias para verificar consumo: ");
	scanf("%d", &dias);
	for (int j = 0; j < dias; ++j){
		for (int k = 0; k < 5; ++k){
			comt += eletro[k].comp;
		}
	}
	for (int l = 0; l < 5; ++l){
		printf("Cosumo Eletrodomestico %d = %.2f %\n", l+1, (eletro[l].comp/comt)*100*dias);
	}
}