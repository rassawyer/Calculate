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