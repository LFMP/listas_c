#include<stdio.h>

struct alunos{
	int matricula;
	float nota1,nota2,nota3,media;
	char nome[20];
};
int main(){
	int n;
	printf("Digite a quantidade de alunos: \n");
	scanf("%d",&n);
	struct alunos aluno[n];
	for (int i = 0; i < n; i++){
		printf("Aluno %d\n", i+1);
		printf("Nome: ");
		scanf(" %[^\n]s",aluno[i].nome);
		printf("Matricula: ");
		scanf("%d", &aluno[i].matricula);
		printf("Notas(p1 p2 p3): ");
		scanf("%f %f %f",&aluno[i].nota1,&aluno[i].nota2,&aluno[i].nota3);
		aluno[i].media=( aluno[i].nota1+ aluno[i].nota2+ aluno[i].nota3)/3;
	}

	for (int i = 0; i < n; i++){
		printf("Aluno %d \n Nome: %s Matricula: %d", i+1, aluno[i].nome, aluno[i].matricula);
		printf("\tMedia: %.2f\n",aluno[i].media);

	}
}