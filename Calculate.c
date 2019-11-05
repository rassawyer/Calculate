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
    printf ("Hello, let's see if this works, shall we?\n ");
    do{
        scanf("%d", &(input.first));
        printf("\n");
        while (getchar () !='\n' );
        scanf("%c", &(input.op));
        printf ("entered %d and %c\n", input.first, input.op);
        switch (input.op)
        {
            case '+':
    //            input.op = 0;
                add();
                break;
            case '-':
                sub();
                break;
            case '*':
                mul();
                break;
            case '/':
                divide();
                break;
            case '=':
                break;
                /*            default:
                              printf ("did not recognize that input; try again.");
                              break;
                              */
        }
    }while (input.op != '=');
    printf ("Result: %d \n", input.first);
    return 0;
}
