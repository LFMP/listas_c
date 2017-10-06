#include <stdio.h>

int main(){
	int idade, n_pessoas, nov=0, velho=0;

	scanf("%d", &n_pessoas);

	for (int i=0; i < n_pessoas; i++){

		printf("Digite a idade: ");
		scanf("%i", &idade);

		if (idade < 21){
			nov++;
		}else if(idade > 50){ 
			velho++;
		}
	}

	printf("Menos de 21:  %d\n", nov);
	printf("Mais de 50: %i\n", velho);

	return 0;
}