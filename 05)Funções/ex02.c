#include <stdio.h>

int xeca(float num){
	int status;
	if (num > 0){
		status = 1;
	}else{
		status = 0;
	}
	return status;
}

int main(){
	float nu;
	scanf("%f", &nu);
	printf("%d\n", xeca(nu));

	return 0;
}