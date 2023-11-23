#include <stdio.h>
#include <stdlib.h> /* Muistin vapautus: funktio free. */
#include "fibonacci.h"

int main(void)
{
  unsigned int *fibonacci = fib_jono(15); /* 15 ensimmäistä fibonaccin lukua. */
  int i = 0;
  for(i = 0; i < 15; ++i)
  {
    printf(" %u", fibonacci[i]);
  }
  printf("\n");
  free(fibonacci); /* Dynaamisesti varatun muistin vapautus. */
  return 0;
}
