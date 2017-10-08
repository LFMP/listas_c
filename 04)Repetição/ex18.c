#include <stdio.h>

int main(){ 

	int fat=1, num=1;

	while(num >= 1){

		scanf("%d", &num);
		if (num < 1){
			break;
		}
		for (int i = 1; i <= num; i++){
			fat = fat*i;
		}
		printf("Fatorial: %d\n", fat);
		fat = 1;
	}
	return 0;
}