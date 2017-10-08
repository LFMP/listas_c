#include <stdio.h>

int main(){ 

	int n=1, par=0, impar=0;

	while (n != 0) {

		scanf("%d", &n);

		if (n % 2 == 0 && n != 0){
			par++;
		}else if(n != 0){
			impar++;
		}
	}

	printf("Par: %d  --  Impar: %d\n", par, impar);
	return 0;
}