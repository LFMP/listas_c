#include <stdio.h>

int main(){
	double paisA=5000000, paisB=7000000;
	int anos=0;

	while(paisA < paisB){
		paisA += paisA*0.03;
		paisB += paisB*0.02;
		anos++;
	}

	printf("Anos p/ A ultrapassar B: %d\n", anos);

	return 0;
}