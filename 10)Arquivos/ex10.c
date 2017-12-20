#include <stdio.h>
int main (){
    FILE *arq=fopen("text.txt","w");
    char nome[50];
    float preco;
    float total=0;
    do{
        printf("Digite o nome:");
        scanf("%s",nome);
        printf("Digite o preco:");
        scanf("%f",&preco);
        total=preco+total;
        if(preco!=0){
            fprintf(arq,"%s %1.2f\n",nome,preco);
        }
    }while(preco!=0);
    fprintf(arq,"%1.2f",total);
}
