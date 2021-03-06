#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define SIZE 10

int v[SIZE];

void * function (void *arg)
{
  int *valor = (int *)(arg);
  int i;
  if (*valor == 1)
    for (i=0; i < SIZE / 2; i++)
      v[i] = 1;
  else
    for (i = SIZE / 2; i < SIZE; i++)
      v[i] = 2;
  return NULL;
}

int main()
{
  pthread_t t1, t2;
  int a1 = 1;
  int a2 = 2;

  pthread_create(&t1, NULL, function, (void *)(&a1));
  pthread_create(&t2, NULL, function, (void *)(&a2));

  pthread_join(t1, NULL);
  pthread_join(t2, NULL);

  for (int i = 0; i < SIZE; i++)
    printf("%d ", v[i]);

  printf("\n");

  exit(0);
}
