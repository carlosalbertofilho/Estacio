/* Escreva um programa que calcula a área e o perímetro de um círculo
 *  de raio r.
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("Programa calcula a área e o perímetro de um círculo de raio r\n");
  double raio, resultado;

  printf("Entre o raio do círculo: ");
  scanf("%lf", &raio);

  resultado = pow(raio, 2) * M_PI;
  printf("A área do círculo de raio %.2lf é %.2lf\n", raio, resultado);

  resultado = 2 * M_PI * raio;
  printf("O perímetro do Círculo de raio %.2lf é %.2lf\n", raio, resultado);

  return 0;
} 


