#include <stdio.h>
#include <math.h>

int fibo(int a){
	float alfa, beta;
	int nice;
	alfa = (1 + sqrt(5))/2;
	beta = (1 - sqrt(5))/2;
	nice = (pow(alfa,a)- pow(beta,a))/(alfa - beta);
	return nice;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", fibo(n));
	return 0;
}