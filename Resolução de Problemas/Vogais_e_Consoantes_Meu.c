#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	char a[51], b[51], lv[51], lc[51], vogal[5] = {'a', 'e', 'i', 'o', 'u'}, *z;
	char consoante[21] = 
	{'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z','y'};
	int i, j, cont=0;

	scanf("%s",a);	

	strcpy(b,a);

	z = strstr(b,a);
	
	j = sizeof(a) - 1;

	for(i=0; i<j; i++){
   		if(z[i] == vogal[0]) {
                	strcat(lv, "a");
            	}
		else if(z[i] == vogal[1]){
			strcat(lv, "e");
		}
		else if(z[i] == vogal[2]){
			strcat(lv, "i");
		}
		else if(z[i] == vogal[3]){
			strcat(lv, "o");
		}
		else if(z[i] == vogal[4]){
			strcat(lv, "u");
		}
	}

	printf("Vogais: %s\n", lv);
	

	for(i=0; i<j; i++){
   		if(z[i] == consoante[0]) {
                	strcat(lc, "b");
            	} 
		else if(z[i] == consoante[1]) {
                	strcat(lc, "c");
            	}
		else if(z[i] == consoante[2]){
			strcat(lc,"d");
		}

		else if(z[i] == consoante[3]) {
                	strcat(lc, "f");
            	}
		else if(z[i] == consoante[4]){
			strcat(lc,"g");
		}
 
		else if(z[i] == consoante[5]) {
                	strcat(lc, "h");
            	}
		else if(z[i] == consoante[6]){
			strcat(lc,"j");
		}

		else if(z[i] == consoante[7]) {
                	strcat(lc, "k");
            	}
		else if(z[i] == consoante[8]){
			strcat(lc,"l");
		}
 
		else if(z[i] == consoante[9]) {
                	strcat(lc, "m");
            	}
		else if(z[i] == consoante[10]){
			strcat(lc,"n");
		}

		else if(z[i] == consoante[11]) {
                	strcat(lc, "p");
            	}
		else if(z[i] == consoante[12]){
			strcat(lc,"q");
		}

		else if(z[i] == consoante[13]){
			strcat(lc,"r");
		}
 
		else if(z[i] == consoante[14]) {
                	strcat(lc, "s");
            	}
		else if(z[i] == consoante[15]){
			strcat(lc,"t");
		}

		else if(z[i] == consoante[16]) {
                	strcat(lc, "v");
            	}
		else if(z[i] == consoante[17]){
			strcat(lc,"w");
		}
 
		else if(z[i] == consoante[18]) {
                	strcat(lc, "x");
            	}
		else if(z[i] == consoante[19]){
			strcat(lc,"z");
		}

		else if(z[i] == consoante[20]){
			strcat(lc,"y");
		}

	}

	printf("Consoantes: %s\n", lc);

	return 0;
}
