#include <stdio.h>

int primo(int x){
	int ver, n=0;
	for (int i=1; i <= x; i++){
		if (x % i == 0){
			n++;
		}
	}
	if (n == 2){
		ver = 1;
	}else{
		ver = 0;
	}

	return ver;
}

int main(){
	int cont=0;
	for (int i = 5000; cont < 20; i++){
		if (primo(i)==1){
			printf("Primo [%d] = %d\n", cont,i);
			cont++;
		}
	}
	return 0;
}