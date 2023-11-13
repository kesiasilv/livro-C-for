#include <stdio.h>

/*5) Faça um progama que calcule e mostre a soma dos 50 primeiros numeros pares*/

int main(){
	
	int i, soma;
	
	for(i = 0; i<=50; i+=2){
		printf(" %d", i);
		soma+= i;
	}
	
	printf("\nsoma = %d", soma);
	
}
