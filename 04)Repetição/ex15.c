#include <stdio.h>
#include <string.h>

int main(){ 

	int cont=0;
	char profissao[9], *checa1 = "DENTISTA", *checa2 = "Dentista", *checa3 = "dentista", *parada = "nenhuma";

	while (strcmp(profissao, parada) != 0) {

		scanf("%s", &profissao);

		if (strcmp(profissao, checa1)==0 || strcmp(profissao, checa2)==0 || strcmp(profissao, checa3)==0){
			cont++;
		}
	}

	printf("Dentistas: %d\n", cont);
	return 0;
}