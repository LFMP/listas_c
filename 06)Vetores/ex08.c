#include <stdio.h>

int main(){
	int n, i, j, comp, conta, vezes;

	scanf("%d", &n);

	float seq[n];

	for (i = 0; i < n; i++){
		scanf("%f", &seq[i]);
	}
	for (i = 0; i < n; i++) {
		vezes = 1;
		j = i + 1;
		while (j < n){
			if (seq[j] != seq[i]){
				j++; 
			}else{
				vezes++;
				n--;                   
				seq[j] = seq[n];       
			}
		}
		printf("%.1f ocorre %d vezes\n", seq[i], vezes);
	}
return 0;
}