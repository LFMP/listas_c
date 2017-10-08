#include <stdio.h>

int main(){ 

	double total=0;
	float numerador=2, denom=1, denom1=1, denom2=1, cont=0;

	while (cont<50) {

		total = total + (numerador/denom);
		numerador = numerador + denom;
		denom = denom1 + denom2;
		denom1 = denom2;
		denom2 = denom;
		cont++;
	}

	printf("Valor total do numero de termos: %f\n", total);
	return 0;
}