#include <stdio.h>

int main(){
	/*3) faça um programa que leia um numero inteiro positivo N,
	e imprima os primeiros números naturais ímpares*/
	
	int i, n;
	
	printf("digite um numero inteiro positivo: ");
	scanf("%d", &n);
	printf("numeros impares: \n");
	
	for(i=1; i<=n; 	i+=2){
		printf("%d ", i);
	}
}
