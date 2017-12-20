#include <stdio.h>
int main (){
    char text[1000];
    char ler[1000];
    char car;
    char c;
    int k=0;
    FILE *arq;
    arq=fopen("text.txt","w");
    printf("Digite o texto:");
    scanf("%[^\n]s",text);
    fprintf(arq,"%s",text);
    fclose(arq);
    getchar();
    printf("Digite caracter:");
    scanf("%c",&car);
    arq=fopen("text.txt","r");
    do{
        c=fgetc(arq);
        if(c == car){
            k++;
        }
    }while(c!=EOF);
    fclose(arq);
    printf("Caracter repetiu:%d vezes",k);
}
