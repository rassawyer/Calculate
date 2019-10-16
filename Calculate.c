# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# include <ctype.h>
# include "input.h"

void add();
void sub();
void mul();
void divide();
struct input input;

int main ()
{
    //char op = 0;
    printf ("Hello, let's see if this works, shall we?\n ");
    do{
        scanf("%d", &(input.first));
        printf("\n");
        scanf("%c", &(input.op));
        printf ("entered %d and %c\n", input.first, input.op);
        switch (input.op)
        {
            case '+':
                input.op = 0;
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

void add ()
{
    do{
        printf ("%d +\n", input.first);
        scanf("%d", &(input.sec));
        input.first = input.first + input.sec;
        scanf("%c", &(input.op));
    }while (input.op == '+');
}

void sub ()
{
    /* Code will go here. */
    do{
        printf ("%d -\n", input.first);
        scanf("%d", &(input.sec));
        input.first = input.first - input.sec;
        scanf("%c", &(input.op));
    }while (input.op == '-');
    printf ("Subtract.\n");
}

void mul ()
{
    /* Code will go here. */
    do{
        printf ("%d *\n", input.first);
        scanf("%d", &(input.sec));
        input.first = input.first * input.sec;
        scanf("%c", &(input.op));
    }while (input.op == '*');
    printf ("Multiply.\n");
}

void divide ()
{
    /* Code will go here. */
    do{
        printf ("%d /\n", input.first);
        scanf("%d", &(input.sec));
        input.first = input.first / input.sec;
        scanf("%c", &(input.op));
    }while (input.op == '/');
    printf ("Divide.\n");
}
