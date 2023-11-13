#include <stdio.h>
#include <math.h>

/*8) faça um progama que leia 10 inteiros e imprima sua media*/

int main(){

  int num, i, soma = 0;
  double media;

  for(i=1; i<=10; i++){
    printf("digite um numero inteiro: ");
    scanf("%i", &num);
    soma += num;

  }
    media = soma / 10;
    printf("Media: %.2lf", media);

}
