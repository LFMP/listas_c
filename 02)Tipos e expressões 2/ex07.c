#include <stdio.h>
#include <math.h>

int main()
{
	float r, p1;
	scanf("%f", &r);

	p1 = 1.333333333 * (M_PI * pow(r,3));
	printf("%f\n", p1);
}
