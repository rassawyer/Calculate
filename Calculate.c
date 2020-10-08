# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# include <ctype.h>
# include "input.h"
# include "operations.h"

struct input input;

int main ()
{
    input.op = '_'; // These are here so that while printing input numbers, no garbage value comes up
    input.sec = 0; 

    printf ("Hello, let's see if this works, shall we?\n");

    do{
        
        printf("Enter your digit : ");  // I added some prints to make it clear to the user what's happening.
        scanf("%d", &(input.first));
        input.result = input.first;
        inputOperator();

    }while (input.op != '=');


    printf ("Result = %d \n", input.result);
    
    return 0;
}
