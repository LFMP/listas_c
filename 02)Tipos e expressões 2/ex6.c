#include <stdio.h>
#include <math.h>

int main()
{
	int x1, x2, y1, y2, p1;
	scanf("%d %d %d %d", &x1, &x2, &y1, &y2);

	p1 = pow(x2-x1,2) + pow(y2-y1,2);
	printf("%f\n", sqrt(p1));

}
