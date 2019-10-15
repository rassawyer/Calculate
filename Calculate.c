# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# include <ctype.h>

void add();
void sub();
void mul();
void divide();
int main ()
{
    char op = 0;
    op = getchar();
    printf ("Hello, let's see if this works, shall we?\n ");
    do{
        switch (op)
        {
            case '+':
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
            default:
                printf ("did not recognize that input; try again.");
            break;
        }
    }while (op != '=');
    return 0;
}

void add ()
{
    /* Code will go here. */
    printf ("Plus.\n");
}

void sub ()
{
    /* Code will go here. */
    printf ("Subtract.\n");
}

void mul ()
{
    /* Code will go here. */
    printf ("Multiply.\n");
}

void divide ()
{
    /* Code will go here. */
    printf ("Divide.\n");
}
