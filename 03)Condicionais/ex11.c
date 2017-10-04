#include <stdio.h>

int main(){
	float salario;
	scanf("%f", &salario);

	if (salario < 2000){
		salario += salario*0.3;
		printf("Novo salario: %f\n", salario);
	}else{
		printf("Sem aumento :(\n");
	}
	return 0;
}
