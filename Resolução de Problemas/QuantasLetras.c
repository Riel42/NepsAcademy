#include <stdio.h>
#include <string.h>

int main(){

	char x[50], y[50], *z;
	int i, cont = 0;

	scanf("%s",x);
	scanf("%s",y);

	z = strstr(x,y);

	if (!z){
		printf("0\n");
	}

	if(z){
		for(i = sizeof(x); i >= 0; i--){
			if(z[i] == y[0]){
				cont++;
			}
		}
		
		printf("%d\n",cont);
	}
}
