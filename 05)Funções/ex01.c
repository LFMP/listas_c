#include <stdio.h>

float ideal(float alt, int s){
	float peso_ideal;
	if (s == 1){
		peso_ideal = (72.7*alt)-58;
	}else{
		peso_ideal = (62.1*alt)-44.7;
	}
	return peso_ideal;
}

int main(){
	int sexo = 0;
	float altura = 0;
	do{
		printf("Digite o sexo da pessoa:\n");
		printf("\t[0] Feminino\n");
		printf("\t[1] Masculino\n");
		scanf("%d", &sexo);
		printf("Digite a altura: ");
		scanf("%f", &altura);
	}while(sexo != 0 && sexo != 1);

	printf("Peso ideal: %.2f Kg\n", ideal(altura, sexo));
	return 0;
}