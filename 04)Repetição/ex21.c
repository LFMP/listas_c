#include <stdio.h>
#include <string.h>

int main(){
	int x,tam;
	char nome[30];
	printf("Digite uma palavra: ");
	scanf("%s", nome);
	tam=strlen(nome);
	printf("A palavra inversa é: ");
	for (x=tam-1; x>=0; x--){
		printf("%c",nome[x]);
	}
	printf("\n");
return 0;
}