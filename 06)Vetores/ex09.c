#include <stdio.h>

void main() {

	int n, i, j, k, p, soma=0, soma_res=-1000;
	printf("Digite a quantidade de números da sequência:\n");
	scanf("%d", &n);
	int vetor_s[n], vetor_r[n];

	for(i=0; i<n; i++){
		printf("Digite o %d termo da sequência:\n", i+1);
		scanf("%d", &vetor_s[i]);
	}

	for(i=0; i<n; i++){
		soma = vetor_s[i];
		for(j=i+1; j<n; j++){
			soma+=vetor_s[j];
			if(soma>soma_res){
				soma_res=soma;
				for(k=0; k<(j-i); k++){
					vetor_r[k]=vetor_s[j - k];
				}
			}
		}	
	}

	printf("%d\n", soma_res);
	for(p=k; p>=0; p--){
		printf("%d\n", vetor_r[p]);
	}
}