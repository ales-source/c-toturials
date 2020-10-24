#include <stdio.h>
#include <stdlib.h>

#include "other.h"

int my_external_var = 5;
extern int my_external_var2;

int main()
{
    printf("%d\n", getnumber());

    printf("%i\n", return_extern_var());

     printf("%i\n", my_external_var2);

    return 0;
}
