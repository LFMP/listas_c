#include <stdio.h>

int main(){
	int vet[10], cont = 0;
	for (int i = 0; i < 10; i++){
		scanf("%d", &vet[i]);
		if (vet[i] % 2 == 1){
			cont += vet[i];
		}
	}
	printf("%d\n", cont);
	return 0;
}