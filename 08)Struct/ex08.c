#include<stdio.h>

struct dados{
	char nome[20];
	int qtdf;
	char nomefilme[20];
	int ano;
	float duracao;
};

int main(){
	int n=0, men = 1;
	struct dados dir[5];
	for (int i = 0; i < 5; i++){
		printf("Diretor %d\n", i+1);
		printf("Nome: ");
		scanf(" %[^\n]s",dir[i].nome);
		printf("Quantidade de filmes: ");
		scanf("%d", &dir[i].qtdf);
		printf("Filmes: ");
		struct dados filmes[dir[i].qtdf]
		for (int a = 0; a < dir[i].qtdf; ++a){
			printf("Filme %d: ", a+1);
			scanf(" %[^\n]s", filmes[a].nome);
			printf("Ano: ");
			scanf(" %d", &filmes[a].ano);
			printf("Duracao: ");
			scanf(" %f", &filmes[a].duracao);
		}
	}
	char direto[20] = "ze ninguem";
	while(direto != ''){
		scanf("%[^\n]s", direto);
		for (int j = 0; j < 5; ++j){
			if (direto == dir[j].nome){
				printf("%s\n", filmes[1].nome);
			}
		}
	}
}