#include <stdio.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "Portuguese");
    int i, M;

    scanf("%d",&M);

    for (i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", M, i, M*i);
    }


}