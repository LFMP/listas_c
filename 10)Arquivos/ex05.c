#include <stdio.h>
int main (){
    char texto[1000];
    char leitor[1000];
    char ver[1000];
    int k;
    FILE *arq;
    arq=fopen("text.txt","w");
    printf("Digite o texto:");
    scanf("%[^\n]s",texto);
    fprintf(arq,"%s",texto);
    fclose(arq);
    arq=fopen("text.txt","r");
    while(fgets(leitor,1000,arq)!=NULL)
    fclose(arq);
    for(k=0;k<1000;k++){
        if(leitor[k]=='a'||leitor[k]=='e'||leitor[k]=='i'||leitor[k]=='o'||leitor[k]=='u'){
            leitor[k]='*';
        }
    }
    arq=fopen("text2.txt","w");
    fputs(leitor,arq);
    fclose(arq);
    arq=fopen("text2.txt","r");
    while(fgets(ver,1000,arq)!=NULL){
        printf("%s",ver);
    }
}
