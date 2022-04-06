#include <stdio.h>
#include <stdlib.h>
int fatorial (int n);

int main(void){
//	variaveis
	int n;
//	entrada
	printf("digite o numero: ");
	scanf("%i",&n);
//	saida

	printf("fatorial do numero %i! =  %i\n",n,fatorial(n));
	
	return 0;
}
int fatorial (int n){
	if (n == 1){
		return 1;
	}else{
		return n*fatorial(n-1);
	}
//	return 0;
}

