#include <stdio.h>

void main(){
    int n,i,k,iM;
    float p,menor;

    scanf("%d",&n);

    p = (float) malloc(n*sizeof(float));

    for(i=0;i<n;i++){
        scanf("%f",&p[i]);
    }
     for(i=0;i<n;i++){
        printf("%f\n",p[i]);
    }
    for(k=0;k<n-1;k++){
            menor=p[k];
            iM=k;
        for(i=k+1;i<n;i++){
            if(menor>p[i]){
                menor=p[i];
                iM=i;
            }
        }
        p[iM]=p[k];
        p[k]=menor;
    }
    for(i=0;i<n;i++){
        printf("%f\n",p[i]);
    }
    free(p);
}
