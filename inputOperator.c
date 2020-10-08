# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# include <ctype.h>
# include "input.h"
# include "operations.h"

void inputOperator(){

    printf ("\n[ %d %c %d = %d ]\n", input.first, input.op, input.sec, input.result); // A cute little addition

        printf("\nEnter an operator : ");
        fflush(stdin);  // This will take care of the new operator by flushing old input buffer
        scanf("%c", &(input.op));

        switch (input.op)
        {
            case '+':
    //            input.op = 0; // I don't know why you commented this here, so I'm gonna leave it like thhat
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
            default:
                printf ("did not recognize that input; try again.");
                inputOperator();
            
        }
         
    
}