/*
 * 4. Desenvolva um programa em C que leia a altura de pessoas, cujo número de pessoas é dado pelo usuário. Este programa deverá verificar e mostrar:
 a. A menor altura do grupo;	
 b. A maior altura do grupo.
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
  float altura=0, maiorAltura=0, menorAltura=10;
  int quantidadPessoas=0;
  printf("Este programa lê a altura das pessoas\n");
  printf("Quantas pessoas você deseja saber a altura?\n");
  scanf("%d", &quantidadPessoas);
  while (quantidadPessoas > 0)
  {
    printf("Digite a altura em metros da pessoa número %d\n", quantidadPessoas);
    scanf("%f", &altura);
    if (maiorAltura < altura) maiorAltura = altura;
    if (menorAltura > altura) menorAltura = altura;
      quantidadPessoas--;
  }
  printf("A maior altura é %.2f\n", maiorAltura);
  printf("A menor altura é %.2f\n", menorAltura);
  return 0;
}
