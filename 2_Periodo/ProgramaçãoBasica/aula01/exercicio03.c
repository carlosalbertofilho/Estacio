/*
 * 3. Escreva um programa em C que leia um valor inicial A e imprima a sequência de valores do cálculo de fatorial de A (A!) e o seu resultado. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120.
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int valor, fatorial;
	printf("Calcula a fatorial de um numero. \n");
	printf("Entre um numero inteiro: \n");
	scanf("%d", &valor);
  printf("%d! vale... \n", valor);
	for(fatorial=1; valor > 1; valor=valor-1)
    {
      printf("Rodada %d, fatorial: %d\n", valor, fatorial);
      fatorial = fatorial * valor;
    }
	printf("Resultado: %d\n",  fatorial);
	return 0;
}
