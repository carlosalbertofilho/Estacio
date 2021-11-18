/* Com base na descrição da struct tm, crie um programa que mostre quantos dias
 * se passaram no ano atual. */

#include <stdio.h>
#include <time.h>

#define LEN 150

int main(void)
{
  char buf[LEN];
  time_t curtime;
  struct tm *loc_time;

  //obtém a hora corrente do sistema
  curtime = time(NULL);

  //Converte para a hora local
  loc_time = localtime(&curtime);

  //Mostra a quantidadade de dias
  strftime(buf, LEN, "Quantos dias se passaram neste ano: %j", loc_time);
  fputs(buf, stdout);

  printf("\n\nQuantos dias faltam para o fim do ano: %d", 365 - (int)loc_time->tm_yday);
}
