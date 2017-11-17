#include <stdio.h>

int verificaCPF(int cpf[11]){
	int valor, res, dig1, dig2, soma1 = 0, soma2 = 0, ind = 0, valido;
	/*verifica digito 1*/
	for (int i = 10; i > 1; i--){
		soma1 += cpf[ind]*i;
		ind++;
	}
	valor = (soma1/11)*11;
	res = soma1 - valor;

	if (res == 1 || res == 0){
		dig1 = 0;
	}else{
		dig1 = 11 - res;
	}
	/*verifica digito 2*/
	ind = 0;
	for (int j = 11; j > 1; j--){
		soma2 += cpf[ind]*j;
		ind++;
	}
	valor = (soma2/11)*11;
	res = soma2 - valor;

	if (res == 1 || res == 0){
		dig2 = 0;
	}else{
		dig2 = 11 - res;
	}

	if (cpf[9] == dig1 && cpf[10] == dig2){
		valido = 1;
	}else{
		valido = 0;
	}
	return valido;
}

int main(){
	int cpf[11];
	for (int i = 0; i < 11; ++i){
		scanf("%d", &cpf[i]);
	}
	if (verificaCPF(cpf) == 0){
		printf("CPF Inválido\n");
	}else{
		printf("CPF Válido\n");
	}
	return 0;
}