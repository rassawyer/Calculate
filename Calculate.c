# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# include <ctype.h>

int add ();
int sub ();
int mul ();
int divide ();
int main ()
{
    // char S = 'a';
    char S = 'd';
    string plus = +;
    string minus = -;
    /* Change this to use char with symbols instead of numbers. +,-,/,*(x?)i move switch back up. end "do" with "="*/
    printf ("Hello, please type the number of the operation you wish to perform, followed by the Enter key \n");
    printf ("1: Addition, 2: Subtraction, 3: Multiplication, 4: Division \n");
    do
    {
        S = fgetc (stdin);
        if (strcmp(S, plus) == 0)
        {
            int add();
        }
        elif (strcmp(S, minus) == 0)
        {
            int sub();
        }
        /*switch (S)
        {
            case +: int add;
                    break;
            case -: int sub;
                    break;
            case *: int mul;
                    break;
            case /: int divide;
                    break;
        } */
    }while (S != =);

    //    int Op = S - '0';
    //    printf ("%d \n", Op);

    return 0;
}
