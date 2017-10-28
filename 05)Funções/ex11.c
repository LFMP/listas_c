#include <stdio.h>

int somadiv(int a){
	int cont=0;
	for (int i = 1; i < a; ++i){
		if (a%i == 0){
			cont = cont + i;
		}
	}
	return cont;
}

int main(){
	int a = -1;
	while (a < 0){
		scanf("%d", &a);
	}
	printf("%d\n", somadiv(a));
	return 0;
}