#include<stdio.h>

struct dados{
	char nome[20];
	int qtdf;
};
struct lfilmes{
	char nomefilme
	int ano;
	float duracao;
}

void criafilmes(int qtdf, int pos){
	struct lfilmes filmes[pos][qtdf];
	for (int a = 0; a < qtdf; ++a){
		printf("Filmes: ");
		printf("Filme %d: ", a+1);
		scanf(" %[^\n]s", filmes[pos][a].nomefilme);
		printf("Ano: ");
		scanf(" %d", &filmes[pos][a].ano);
		printf("Duracao: ");
		scanf(" %f", &filmes[pos][a].duracao);
	}
	char direto[20] = "ze ninguem";
	while(direto != ''){
		scanf("%[^\n]s", direto);
		for (int j = 0; j < 5; ++j){
			if (direto == dir[j].nome){
				for (int d = 0; d < dir[j].qtdf; ++d){
					printf("%s\n", filmes[j][d].nomefilme);
					printf("%d\n", filmes[j][d].ano);
					printf("%f\n", filmes[j][d].duracao);
				}
			}
		}
	}
}

int main(){
	int n=0, men = 1;
	struct dados dir[5];
	for (int i = 0; i < 5; i++){
		printf("Diretor %d\n", i+1);
		printf("Nome: ");
		scanf(" %[^\n]s",dir[i].nome);
		printf("Quantidade de filmes: ");
		scanf("%d", &dir[i].qtdf);
		criafilmes(dir[i].qtdf, i);
	}
}