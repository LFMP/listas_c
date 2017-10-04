#include <stdio.h>
#include <math.h>

int main(){
	float x;
	scanf("%f", &x);

	if (x >= 0){
		printf("%f\n", sqrt(x));
	}else{
		printf("Raiz não real\n");
	}
	return 0;
}
