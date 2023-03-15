#include <stdio.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "Portuguese");
    int M, N;

    scanf("%d",&M);
    scanf("%d",&N);

    if (M > N){
        for (N; N <= M; N++){
            printf("%d ",N);
        }
    }

        else if (N > M){
        for (M; M <= N; M++){
            printf("%d ",M);
        }
    }


}