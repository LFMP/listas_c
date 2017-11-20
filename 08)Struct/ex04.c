#include<stdio.h>

struct prod{
	int cod;
	float preco;
	char nome[20];
};

int main(){
	int n, men = 1, codigo;
	printf("Digite a quantidade de produtos: \n");
	scanf("%d",&n);
	struct prod produto[n];
	for (int i = 0; i < n; i++){
		printf("produto %d\n", i+1);
		printf("Nome: ");
		scanf(" %[^\n]s",produto[i].nome);
		printf("cod: ");
		scanf("%d", &produto[i].cod);
		printf("Preço: ");
		scanf("%f", &produto[i].preco);
	}
	for (int k = 0; k < n; ++k){
		printf("%d\t", produto[k].cod);
		printf("%s\n", produto[k].nome);
	}
	while(men != 0){
		printf("[1]Buscar produto por cod\n");
		printf("[0]Sair\n");
		scanf("%d", &men);
		if (men = 0){
			break;
		}else{
			printf("Digite o cod: ");
			scanf("%d", &codigo);
			for (int j = 0; j < n; ++j){
				if (codigo == produto[j].cod){
					printf("R$ %.2f\n", produto[j].preco);
				}
			}
		}
	}
}