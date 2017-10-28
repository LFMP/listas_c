#include <stdio.h>

int fatorial(int a){
	int fat=1;
	for (int i = 1; i <= a; i++){		
		fat = fat*i;
	}
	return fat;
}

int main(){
	int a = 0;
	while (a < 1){
		scanf("%d", &a);
	}
	printf("%d\n", fatorial(a));
	return 0;
}