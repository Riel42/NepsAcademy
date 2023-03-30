#include <stdio.h>


int main(){
	int leitura[10], i, X, verdade = 0;

	for(i=0; i<=9; i++){
		scanf("%d",&leitura[i]);
	}

	scanf("%d",&X);

	for(i=0; i<=9; i++){
		if(X == leitura[i]){
			printf("SIM\n");
			verdade = 1;
			break;
		}
	}

	if (verdade != 1){
		printf("NAO\n");
	}

	return 0;
}
