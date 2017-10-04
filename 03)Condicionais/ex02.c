/*
                      <= Faltou importar a biblioteca "stdio.h"
int main(){
	int a, b, c, menor;
	printf("Digite o primeiro número\n");
	scanf("%d", &a);
	printf("Digite o segundo número\n");
	scanf("%d", &b);
	printf("Digite o terceiro número\n");
	scanf("%d", &c);

	if (a < b && b < c)     <= Faltou abrir e fechar chaves e erro na lógica
		menor = c;
	else{
		if (c < a && a < b) <= Faltou abrir e fechar chaves
			menor = c;
		else				<= Faltou abrir e fechar chaves
			menor = b;
	}
	printf("%d\n", menor);
}
*/

#include <stdio.h>
int main(){
	int a, b, c, menor;
	printf("Digite o primeiro número\n");
	scanf("%d", &a);
	printf("Digite o segundo número\n");
	scanf("%d", &b);
	printf("Digite o terceiro número\n");
	scanf("%d", &c);

	menor = a;
	if (b < menor){
		menor = b;
	}
	if (c < menor){
		menor = c;
	}	
	printf("%d\n", menor);
	return 0;
}