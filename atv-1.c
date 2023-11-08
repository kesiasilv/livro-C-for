#include <stdio.h>

int main(){
	/*1) faça um programa que leia um numero inteiro positivo N,
	e imprima todos os números naturais de 0 até N em ordem*/
	
	int n, i;
	
	printf("digite um numero inteiro positivo: ");
	scanf("%d", &n);
	
	for(i=0; i<=n; i++){
		printf("%d ", i);
	}
}
