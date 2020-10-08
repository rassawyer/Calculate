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
    printf("Enter digit: ");
    scanf("%d", &(input.sec));

    input.first = input.result; // so each time the old result gets  to first and so we could use it in displaying
    input.result = input.result * input.sec;
    
    inputOperator();
    fflush(stdin);
}
