# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# include <ctype.h>
# include "input.h"
# include "operations.h"

void inputOperator(){

        printf("\nEnter an operator : ");
        fflush(stdin);  // This will take care of the new operator
        scanf("%c", &(input.op));

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
            default:
                printf ("did not recognize that input; try again.");
                inputOperator();
            
        }
    
}