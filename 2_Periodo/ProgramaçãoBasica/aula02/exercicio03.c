/* Usando a Biblioteca time.h */
#include <stdio.h>
#include <time.h>

int main()
{
  time_t seg;
  seg = time (NULL);

  printf("O número de horas desde 1º de Janeiro de 1970 é %ld\n", seg / 3600);
  return 0;
}
