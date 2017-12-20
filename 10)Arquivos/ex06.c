#include <stdio.h>
#include <string.h>
int main () {
    char nome[40];
    char name[40];
    int hab,x=0,maior=0,ha;
    FILE *arq;
    FILE *arq2;
    arq=fopen("text.txt","w");
    do{
        printf("Digite o nome da cidade:");
        scanf("%s",nome);
        printf("Digite quantidade de habitantes:");
        scanf("%d",&hab);
        if(hab!=0){
        fprintf(arq,"%s %d\n",nome,hab);
        }
    }while(hab!=0);
    fclose(arq);
    arq=fopen("text.txt","r");
    while(fscanf(arq,"%s %d\n",name,&ha)!=EOF){
        if(ha>maior){
            arq2=fopen("text2.txt","w");
            fprintf(arq2,"%s %d",name,ha);
            fclose(arq2);
            maior=ha;
        }
    }
    fclose(arq);

}
