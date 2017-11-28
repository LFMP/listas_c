#include <stdio.h>
#include <string.h>

struct lfilmes{
	char nomefilme[50];
	int ano;
	float duracao;
};
struct dados{
	char nome[20];
	int qtdf;
	struct lfilmes diretor[2];
};

int main(){
	struct dados dir[2];
	for (int i = 0; i < 2; i++){
		printf("Diretor %d\n", i+1);
		printf("Nome: ");
		scanf(" %[^\n]s", dir[i].nome);
		printf("Quantidade de filmes: ");
		scanf("%d", &dir[i].qtdf);
		for (int a = 0; a < dir[i].qtdf; ++a){
			printf("Filme %d: ", a+1);
			scanf(" %[^\n]s", dir[a].diretor[a].nomefilme);
			printf("Ano: ");
			scanf(" %d", &dir[a].diretor[a].ano);
			printf("Duracao: ");
			scanf(" %f", &dir[a].diretor[a].duracao);
		}
	}
	
	char direto[20];
	do{
		direto[0] = '\0';
		printf("Digite nome do diretor pra buscar: ");
		getchar();
		scanf("%[^\n]s", direto);
		for (int j = 0; j < 2; ++j){
			if (strcmp(direto, dir[j].nome) == 0){
				for (int c = 0; c < dir[j].qtdf; ++c){
					printf("%s\n", dir[c].diretor[c].nomefilme);
				}
			}
		}
	}while(strlen(direto) > 0);
}
