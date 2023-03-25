#include <stdio.h>

int fibonacci(int x){
	if (x == 0){
		return 1;
	}

	else if (x == 1){
		return 1;
	}

	else{
		return x = fibonacci(x - 1) + fibonacci(x - 2);		
	}
}

int main(){

	int n;

	scanf("%d",&n);

	printf("%d\n",fibonacci(n));

	return 0;
}
