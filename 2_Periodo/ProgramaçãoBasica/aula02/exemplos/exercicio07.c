/* Exemplo da função difftime() */
#include <stdio.h>
#include <time.h>

int main(void)
{
  time_t start, end;
  volatile long unsigned contador;

  start = time(NULL);
  for(contador =0; contador < 500000000; contador++)
    /*não faz nada*/;
  end = time(NULL);
  printf("O loop for usa %f segundos.\n", difftime(end, start));
  return 0;
}
