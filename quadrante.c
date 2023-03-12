/*

Q1 -> positivo, positivo
Q2 -> negativo, positivo
Q3 -> negativo, negativo
Q4 -> positivo, negativo

Eixos -> valor nulo
*/

#include <stdio.h>
int main(){

    int a, b;

    scanf("%d%d",&a,&b);

    if (a > 0 && b > 0){
        printf("Q1\n");
    }

    else if (a < 0 && b > 0){
        printf("Q2\n");
    }

    else if (a < 0 && b < 0){
        printf("Q3\n");
    }

    else if (a > 0 && b < 0){
        printf("Q4\n");
    }

    else{
        printf("eixos\n");
    }

}
