#include <stdio.h>

int main(){

	int Vetor[10], i;

	for(i=0; i<=9; i++){
		scanf("%d",&Vetor[i]);	
	}

	for(i = sizeof(Vetor)/sizeof(int) - 1; i >= 0; i--){
		printf("%d\n", Vetor[i]);
	}
}
