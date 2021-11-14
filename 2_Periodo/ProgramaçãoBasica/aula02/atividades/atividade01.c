/* Descreva como devem ficar os arquivos main.c, biblioteca.h e biblioteca.c
 * para calcular, além do fatorial, o valor do cubo do número dado pelo
 * usuário.*/

/* main.c */
#include <stdio.h>
#include "biblioteca.h"

int cubo(int num);

int main(void)
{
  int num;
  printf("Este programa calcula o cubo de um número\n");
  printf("Entre um número: ");
  num = scanf("%d", &num);

  printf("O cubo de %d é %d", num, cubo(num) );
  return 0;
}

