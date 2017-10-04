#include <stdio.h>
#include <math.h>

int main()
{
	//Ex3 - a

	int x, i, j, op1;
	scanf("%i %i %i", &x, &i, &j);
	op1 = pow(x, i+j);
	printf("%i\n", op1);

	//Ex3 - b

	float a1, b1, c1, op2;
	scanf("%f %f %f", &a1, &b1, &c1);
	op2 = (a1+b1)*(2-(pow(c1,2)/(1 - pow(c1,3))));
	printf("%f\n", op2);
	
	//Ex3 - c

	float y, op3;
	scanf("%f", &y);
	op3 = 2 / (2 - 5*y);
	printf("%f\n", op3);
	
	//Ex3 - d

	float a2, b2, c2, d2, op4;
	scanf("%f %f %f %f", &a2, &b2, &c2, &d2);
	op4 = a2 + (b2/(c2+d2));
	printf("%f\n", op4);
	
	//Ex3 - e

	float r, s, t, op5;
	scanf("%f %f %f", &r, &s, &t);
	op5 = 1 / ((1/r)+(1/s)+(1/t));
	printf("%f\n", op5);
	
	//Ex3 - f

	float m, n, op6;
	scanf("%f %f", &m, &n);
	op6 = 20 / (m - n);
	printf("%f\n", op6);
	
	//Ex3 - g

	float p, w, u, v, op7;
	scanf("%f %f %f %f", &p, &w, &u, &v);
	op7 = (p + (w/(u+v)))/(p - (w/(u-v)));
	printf("%f\n", op7);
	
	//Ex3 - h

	float a3, b3, c3, d3, op8;
	scanf("%f %f %f %f", &a3, &b3, &c3, &d3);
	op8 = a3 / (b3 + (c3/d3));
	printf("%f\n", op8);
	
	//Ex3 - i

	float n, op9;
	scanf("%f", &n);
	op9 = pow(1 + (1/n),n);
	printf("%f\n", op9);
	
	//Ex3 - j

	float x1, y1, op10;
	scanf("%f %f", &x1, &y1);
	op10 = (0.5) * sqrt(pow(x1,2) + pow(y1,2));
	printf("%f\n", op10);

	//Ex3 - k

	float a4, b4, c4, op11;
	scanf("%f %f %f", &a4, &b4, &c4);
	op11 = pow(a4+b4,0.5) / (pow(c4,2) - 2*a4);
	printf("%f\n", op11);

}
