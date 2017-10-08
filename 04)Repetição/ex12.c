#include <stdio.h>
#include <math.h>

int main(){
	float res=0, frac;

	for (int i = 1; i <=100; i++){
		frac = -pow(-1,i)*(pow(i,-1));
		res+= frac;
	}
	printf("%f\n", res);
	return 0;
}