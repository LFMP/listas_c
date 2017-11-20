#include <stdio.h>
#include <string.h>

struct cadastro{
	char nome[20];
	char end[50];
	char telefone[11];
};

int main(){
int i;
	struct cadastro c[5], aux[1];

	for (i=0; i<5; i++){
		printf("Digite Nome %d: ", i+1);
		scanf(" %[^\n]s", &c[i].nome);
		printf("Digite seu Endereco : ");
		scanf(" %[^\n]s", &c[i].end);
		printf("Digite seu Telefone : ");
		scanf(" %[^\n]s", &c[i].telefone);
	}

	for (int j = 0; j < 5; ++j){
		for (int l = 0; l < 5; ++l){
			if (strcmp(c[j].nome,c[i].nome) < 0){
				aux[1] = c[j];
				c[j] = c[l];
				c[l] = aux[1];
			}
		}
	}
	for (int k=0; k<5; k++){
		printf("Nome %d: %s\n", k+1,c[k].nome);
		printf("Endereco: %s\n", c[k].end);
		printf("Telefone: %s\n", c[k].telefone);
	}
}