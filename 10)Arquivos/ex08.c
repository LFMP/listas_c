#include <stdio.h>
int main (){
    char nome[50];
    int d,m,a;
    int hj;
    FILE* arq;
    arq=fopen("text.txt","w");
    do{
    printf("Digite o nome:");
    scanf("%s",nome);
    printf("Digite a data de nascimento(ex 20 3 1990):");
    scanf("%d %d %d",&d,&m,&a);
    if(d!=0){
        fprintf(arq,"%s %d %d %d\n",nome,d,m,a);
        }
    }while(d!=0);
    fclose(arq);
    printf("Digite q ano estamos.");
    scanf("%d",&hj);
    arq=fopen("text.txt","r");
    FILE *arq2=fopen("text2.txt","w");
    while(fscanf(arq,"%s %d %d %d",nome,&d,&m,&a)!=EOF){
        fprintf(arq2,"Nome:%s Idade:%d\n",nome,hj-a);
    }
}
