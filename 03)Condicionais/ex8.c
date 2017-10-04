#include <stdio.h>
#include <math.h>

int main(){
	float a, b, x, div;
	scanf("%f %f %f", &x, &a, &b);

	if ((a + b) != 0){
		div = x/(a+b);
	}else{
		printf("Divisão por zero\n");
	}
	if (div >= 0){
		printf("%f\n", sqrt(div));
	}else{
		printf("Raiz não real\n");
	}
	return 0;
}
