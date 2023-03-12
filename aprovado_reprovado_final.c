#include <stdio.h>

int main(){
	float a, b;

	scanf("%f%f",&a,&b);

	if ((a*2+b*3)/a+b >= 7){
		printf("Aprovado\n");
	}

	else if ((a*2+b*3)/a+b < 3){
		printf("Reprovado\n");
	}

	else{
		printf("Final\n");
	}
}
