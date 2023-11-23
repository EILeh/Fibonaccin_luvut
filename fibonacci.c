#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

unsigned int * fib_jono(unsigned int n)
{
    unsigned int *x = malloc(n*sizeof(int));
    int i = 0;

    for (i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            x[i] = 0;
        }

        else if (i == 1)
        {
            x[i] = 1;
        }
        else
        {

            x[i] = x[i-1] + x[i-2];
        }
    }
    return x;
}
