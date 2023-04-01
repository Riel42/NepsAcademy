#include <stdio.h>
#include <string.h>

int main() {
    char palavra[51], vogais[51], consoantes[51];
    int j;
    scanf("%s", palavra);
    
	j = sizeof(palavra) - 1;

    for(int i=0; i<j; i++){
        if(palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o' || palavra[i]=='u'){
            vogais[i]=palavra[i];
        }
        else{
            consoantes[i]=palavra[i];
        }
    }

    printf("Vogais: %s\nConsoantes: %s", vogais, consoantes);
    
    return 0;
}
