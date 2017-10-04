#include<stdio.h>
int main() {
	float salario, bon, salario_n;
	printf("Digite o salário do funcionário:\nR$ ");
	scanf("%f", &salario);
	if(salario <= 1000){
		if(salario <= 800){
			bon = salario*0.15;
			salario_n = salario + bon + 250;
			printf("O novo salário do funcionário é R$ %.2f\n", salario_n);
		}else{
			bon = salario*0.15;
			salario_n = salario + bon + 200;
			printf("O novo salário do funcionário é R$ %.2f\n", salario_n);
		}
	}else{
		if(salario >= 1000.01 && salario <= 1500){
			bon = salario*0.1;
			salario_n = salario + bon + 200;
			printf("O novo salário do funcionário é R$ %.2f\n", salario_n);
		}else{
			salario_n = salario + 200;
			printf("O novo salário do funcionário é R$ %.2f\n", salario_n);
		}
	}
	return 0;
}