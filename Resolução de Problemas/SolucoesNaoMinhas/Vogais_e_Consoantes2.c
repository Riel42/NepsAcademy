#include <stdio.h>
#include <string.h>

int main(){
	char a[50], b[50], lv[50], lc[50], *z;
	
	char *vogal = "aeiou";
	char *consoante = "bcdfghjklmnpqrstvwxyz";

	int i, j;

	scanf("%s",a);

	strcpy(b,a);

	z = strstr(b,a);

	j = sizeof(a);

	printf("Vogais: ");

	for(i=0; i<j; i++){
		if(strchr(vogal, z[i]) != NULL){
			lv[strlen(lv)] = z[i];
		}
	}

	printf("%s\nConsoantes: ",lv);

	for(i=0; i<j; i++){
		if(strchr(consoante, z[i]) != NULL){
			lc[strlen(lc)] = z[i];
		}
	}

	printf("%s\n",lc);
}
