#include <stdio.h>
int main(){
    int valores[10], i, X, cont = 0, Verify = 0;

    for (i=0; i<=9; i++){
        scanf("%d",&valores[i]);
    }
    scanf("%d",&X);

    for(i=0; i<=9; i++){
        if( valores[i] == X){
            cont++;
            Verify++;
        }
    }

    if(Verify == 0){
        printf("Mia x\n");
    }

    else if(Verify > 0){
        printf("%d\n", cont);

        for(i=0; i<=9; i++){
            if(valores[i] == X){
                printf("%d ",i);
            }
        }
    }

}
