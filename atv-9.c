#include <stdio.h>
#include <stdlib.h>

/*9) escreva um progama que leia 10 numeros e escreva o menor
valor lido e o maior valor lido*/

int main(){

  int num, maior = 0, menor = 0, i=0; //variaveis
  
    printf("Digite um numero: ");//considerando o primeiro numero digitado para guardar nas variaveis maior e menor;
    scanf("%d",&num);
    
  menor = num;//atribuindo o valor para a variavel maior e menor com o numero digitado
  maior = num;
  
  for(i= 1; i < 10; i++ ){//o  comando "for" fará a solicitacao dos numeros e a verificacao se é maior ou menor a cada vez que ele for executado!
    printf("Digite um numero: ");
    scanf("%d",&num);//solicitando ao usuario para digitar os valores no laço de 10 repetiçoes
  
    if(num > maior){//se o numero for maior q o valor da variavel maior guarde na mesma variavel o valor
    	maior = num;//guardando o valor caso ele seja maior
	}
    if(num < menor){//se o numero for menor q o valor da variavel menor guarde na mesma variavel o valor
    	menor = num; //guardando o valor caso ele seja menor
	}
    
  }
//apresentando resultados:
  printf ("menor numero digitado: %d\n", menor);//imprimi o maior numero digitado
  printf("maior numero digitado: %d", maior);//imprimi o menor numero digitado
  
 
  
  
}
