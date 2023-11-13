#include <stdio.h>
#include <math.h>

/*7) Elabore um progama que peça ao usuario para digitar 10 valores.
Some esses valores e apresente o resultado na tela*/

int main(){
	
	double num, soma = 0;
	int i;
	
	for(i=1; i<=10; i++){
		printf("digite um valor: ");
    	scanf("%lf", &num);
    	soma += num;
	}
	
	printf("\nsoma = %.2lf", soma);
	
}
