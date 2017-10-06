#include <stdio.h>

int main(){
	float f, c;

	for (f=20; f <= 80; f++){
		printf("\tºF: %.2f\t", f);
		c = (f-32)/1.8;
		printf("ºC: %.2f\n", c);
	}
	return 0;
}