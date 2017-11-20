#include <stdio.h>
#include <math.h>

struct pontos{
	int px,py;
};
int main(){
	struct pontos p[5];
	int dist[4],menpont;
	for (int i = 0; i < 5; i++){
		printf("p[%d]\n", i);
		printf("X: ");
		scanf(" %d", &p[i].px);
		printf("Y: ");
		scanf(" %d",&p[i].py);	
	}
	int menor = 10000;
	for (int j = 1; j < 5; ++j){
		dist[j] = sqrt(pow(p[0].px - p[j].px,2) + pow(p[0].py - p[j].py,2));
		if (dist[j] < menor){
			menor = dist[j];
			menpont = j;
		}
	}
	printf("Menor distancia: %d com o ponto: %d\n", menor, menpont);
}