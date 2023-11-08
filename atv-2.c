#include <stdio.h>

int main(){
	/*2) faça um programa que leia um numero inteiro positivo N,
	e imprima todos os números naturais de 0 até N em ordem decrescente*/
	
	int n;
	
	printf("digite um numero inteiro positivo: ");
	scanf("%d", &n);
	
	for(n; n>=0; n--){
		printf("%d ", n);
	}
}
