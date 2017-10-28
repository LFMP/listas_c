#include <stdio.h>

int perfeito(int a){
	int cont=0, nice;
	for (int i = 1; i < a; ++i){
		if (a%i == 0){
			cont = cont + i;
		}
	}
	if (a == cont){
		nice = 1;
	}else{
		nice = 0;
	}
	return nice;
}

int main(){
	int a;
	scanf("%d", &a);
	printf("%d\n", perfeito(a));
	return 0;
}