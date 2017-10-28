#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2){
	float ddp;
	ddp = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return ddp;
}

int main(){
	int x1, y1, x2, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	printf("%d\n", dist(x1,y1,x2,y2));
	return 0;
}