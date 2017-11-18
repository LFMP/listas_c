#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define tamanho 50000

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubble_sort(int vetor_1[tamanho]){
	int aux;
	for (int i = 0; i < tamanho; ++i){
		for (int j = 0; j < tamanho; ++j){
			if (vetor_1[j]>vetor_1[j+1]){
				aux = vetor_1[j];
				vetor_1[j] = vetor_1[j+1];
				vetor_1[j+1] = aux;
			}
		}
	}
}

void insertion_sort(int vetor_2[tamanho]){

	int key, j;
	for (int i = 1; i < tamanho; ++i){
		key = vetor_2[i];
		j = i-1;
		while (j >= 0 && vetor_2[j]>key){
			vetor_2[j+1] = vetor_2[j];
			j--;
		}
		vetor_2[j+1]=key;
	}
}

void selection_sort(int vetor_3[tamanho]){

	int min, aux;

	for (int i = 0; i < tamanho - 1; ++i){
		min = i;
		for (int j = i + 1; j < tamanho; ++j){
			if (vetor_3[j] < vetor_3[min]){
				min = j;
			}
		}
		swap(&vetor_3[min], &vetor_3[i]);
	}
}

int main(){

	// Variaveis usadas para mensuracao do tempo
	struct timespec comeco, fim;
	double accum;

	// vetor_1 eh usado no bubble sort
	// vetor_2 eh usado no insertion sort
	// vetor_3 eh usado no selection sort
	int vetor_1[tamanho], vetor_2[tamanho], vetor_3[tamanho], idx, valor;
	for (idx = 0; idx < tamanho; idx++){
		valor = rand() % 1000000;
		vetor_1[idx] = valor;
		vetor_2[idx] = valor;
		vetor_3[idx] = valor;
	}

	// Bubble sort

	clock_gettime(CLOCK_REALTIME, &comeco);
	bubble_sort(vetor_1);
	clock_gettime(CLOCK_REALTIME, &fim);

	for (idx = 0; idx < tamanho - 1; idx++) {
		if (vetor_1[idx] > vetor_1[idx + 1]) {
			printf("O bubble sort não ordenou corretamente!");
		}
	}

	accum = ( fim.tv_sec - comeco.tv_sec ) + ( fim.tv_nsec - comeco.tv_nsec )/ 1E9;
	printf("Tempo do bubble sort: %lf\n", accum);

	// Insertion sort

	clock_gettime(CLOCK_REALTIME, &comeco);
	insertion_sort(vetor_2);
	clock_gettime(CLOCK_REALTIME, &fim);

	for (idx = 0; idx < tamanho - 1; idx++) {
		if (vetor_2[idx] > vetor_2[idx + 1]) {
			printf("O insertion sort não ordenou corretamente!");
		}
	}

	accum = ( fim.tv_sec - comeco.tv_sec ) + ( fim.tv_nsec - comeco.tv_nsec )/ 1E9;
	printf("Tempo do insertion sort: %lf\n", accum);

	// Selection sort

	clock_gettime(CLOCK_REALTIME, &comeco);
	selection_sort(vetor_3);
	clock_gettime(CLOCK_REALTIME, &fim);

	for (idx = 0; idx < tamanho - 1; idx++) {
		if (vetor_3[idx] > vetor_3[idx + 1]) {
			printf("O selection sort não ordenou corretamente!");
		}
	}

	accum = ( fim.tv_sec - comeco.tv_sec ) + ( fim.tv_nsec - comeco.tv_nsec )/ 1E9;
	printf("Tempo do selection sort: %lf\n", accum);
}