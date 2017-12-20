#include <stdio.h>
int main(){
    char texto[1000];
    int vogal=0;
    char c;
    FILE *arq;
    arq=fopen("text.txt","w");
    printf("Digite o texto:");
    scanf("%[^\n]s",texto);
    fprintf(arq,"%s",texto);
    fclose(arq);
    arq=fopen("text.txt","r");
    do{
    c=fgetc(arq);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        vogal=vogal+1;
        }
    }while(c!=EOF);
    fclose(arq);
    printf("Vogais:%d",vogal);
}
