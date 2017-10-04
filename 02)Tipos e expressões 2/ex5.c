#include <stdio.h>

int main()
{
	//Ex5 - a
	float x1;
	scanf("%f", &x1);
	if (x1 > 0 && x1 < 3)
	{
		printf("Está no intervalo aberto (0,3)\n");
	}

	//Ex5 - b
	float x2;
	scanf("%f", &x2);
	if (x2 >= 0 && x2 <= 3)
	{
		printf("Está no intervalo fechado [0,3]\n");
	}
	//Ex5 - c
	float p1, x3, y1, z1;
	scanf("%f %f %f %f", &p1, &x3, &y1, &z1);
	if (p1 > x3 || p1 > y1 || p1 > z1){
		printf("True\n");
	}
	
	//Ex5 - d
	float x4;
	scanf("%f", &x4);
	if (x4 >= 0 && x4 < 6)
	{
		printf("0 <= x < 6\n");
	}

	//Ex5 - e
	float m1;
	scanf("%f", &m1);
	if (m1 > 50 || m1 < 0)
	{
		printf("m > 50 ou m < 0\n");
	}

	//Ex5 - f
	float x5, y2;
	scanf("%f %f", &x5, &y2);
	if (x5 >= y2)
	{
		printf("True\n");
	}
	
	//Ex5 - g
	float x6, y3, z2;
	scanf("%f %f %f", &x6, &y3, &z2);
	if (x6 >= y3 && x6 >= z2)
	{
		printf("True\n");
	}

	//Ex5 - h
	float a1, b1, c1;
	scanf("%f %f %f", &a1, &b1, &c1);
	if (a1 == b1 == c1)
	{
		printf("True\n");
	}

	//Ex5 - i
	float a2, b2, c2, d1, e1;
	scanf("%f %f %f %f %f", &a2, &b2, &c2, &d1, &e1);
	if (a2 != b2 && c2 != d1 && c2 != e1)
	{
		printf("True\n");
	}

	//Ex5 - j
	float a3, b3;
	scanf("%f %f", &a3, &b3);
	if (a3 >= 1 && a3 <= 10 && b3 >= 1 && b3 <= 10)
	{
		printf("A e B estão entre 1 e 10, incluindo os extremos.\n");
	}

	//Ex5 - k
	float a4, b4, c3;
	scanf("%f %f %f", &a4, &b4, &c3);
	if ((a4 > c3 && b4 > c3) || (a4 <=20 && b4 <= 20))
	{
		printf("a e b são maiores que c ou, então, a e b são menores ou iguais a 20.\n");
	}

	//Ex5 - l
	float a5, b5;
	scanf("%f %f", &a5, &b5);
	if (a5 <= 10 && b5 <= 10)
	{
		printf("Nem a nem b é maior que 10.\n");
	}

	//Ex5 - m
	float x7, a6, b6;
	scanf("%f %f %f", &x7, &a6, &b6);
	if (x7 < a6 && x7 > b6 || x7 > a6 && x7 < b6)
	{
		printf("x não está entre a e b.\n");
	}

}
