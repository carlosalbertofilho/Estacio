#include <stdio.h>

/* declaração da função */
int max(int num1, int num2);

int main() {
  /* definição de variável local */
  int a = 100;
  int b = 200;
  int ret;

  /* chamado uma função para obter o valor máximo */
  ret = max(a, b);

  printf("O valor máximo é: %d\n", ret);

  return 0;
}

/* função retornando o máximo entre dois números */
int max(int num1, int num2) {
  int resultado;
  if (num1 > num2)
    resultado = num1;
  else
    resultado = num2;
  return resultado;
}
