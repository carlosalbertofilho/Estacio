/* exemplo da hora légivel */
#include <stdio.h>
#include <time.h>

int main(void)
{
  time_t minha_hora;
  minha_hora = time(NULL);
  printf("%s",ctime(&minha_hora));
  return 0;
}
