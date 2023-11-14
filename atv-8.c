#include <stdio.h>
#include <math.h>

/*8) faça um progama que leia 10 inteiros e imprima sua media*/

int main(){

  int num, i, soma = 0;
  double media;

  for(i=1; i<=10; i++){//fazendo a leitura dos numeros digitados e somando com o proximo numero até terminar o laço;
    printf("digite um numero inteiro: ");
    scanf("%i", &num);
    soma += num;//guardado na variavel soma o resultado da soma 
  }
  
    media = soma / 10;//calculando a media
    printf("Media: %.2lf", media);

}
