#include <stdio.h>

int somatorio(int a){
	int cont=0;
	for (int i = 1; i <= a; ++i){
		cont = cont + i;
	}
	return cont;
}

int main(){
	int a;
	scanf("%d", &a);
	printf("%d\n", somatorio(a));
	return 0;
}