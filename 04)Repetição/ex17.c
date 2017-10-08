#include <stdio.h>
#include <math.h>

int main(){ 

	int n=1, quadrado;

	while (n % 6 != 0) {

		scanf("%d", &n);

		quadrado = pow(n,2);
		printf("Quadrado: %d\n", quadrado);
	}
	return 0;
}