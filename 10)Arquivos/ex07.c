#include <stdio.h>
int main (){
    char nome[50];
    int tel;
    FILE *arq;
    arq=fopen("text.txt","w");
    do{
        printf("Digite o seu nome:");
        scanf("%s",nome);
        printf("Digite o telefone:");
        scanf("%d",&tel);
        if(tel!=0){
        fprintf(arq,"%s %d\n",nome,tel);
        }
    }while(tel!=0);
    fclose(arq);

}
