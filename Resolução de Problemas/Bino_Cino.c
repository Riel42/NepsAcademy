#include <stdio.h>

int parOuImpar(int a, int b){
    int res;

    res = a+b;

    if (res%2==0){
        printf("Bino\n");
    }

    else{
        printf("Cino\n");
    }
}

int main(){

    int Bino, Cino;

    scanf("%d%d",&Bino, &Cino);

    parOuImpar(Bino, Cino);

    return 0;
}
