# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# include <ctype.h>
# include "input.h"
# include "operations.h"

void mul ()
{
    /* Code will go here. */
    do{
        printf ("%d *\n", input.first);
        while (getchar () !='\n' );
        scanf("%d", &(input.sec));
        input.first = input.first * input.sec;
        while (getchar () !='\n' );
        scanf("%c", &(input.op));
    }while (input.op == '*');
    printf ("Multiply.\n");
}
