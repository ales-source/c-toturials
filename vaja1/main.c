#include <stdio.h>
#include <stdlib.h>

#include "other.h"

int my_external_var = 5;
extern int my_external_var2;

int static_count_fun()
{
    static int count = 0;

    count++;
    return count;
}

int main()
{
    printf("%d\n", getnumber());

    printf("%i\n", return_extern_var());

     printf("%i\n", my_external_var2);

     printf("%d\n", static_count_fun());
       printf("%d\n", static_count_fun());

    return 0;
}
