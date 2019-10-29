void divide ()
 86 {
 87     /* Code will go here. */
 88     do{
 89         printf ("%d /\n", input.first);
 90         scanf("%d", &(input.sec));
 91         input.first = input.first / input.sec;
 92         scanf("%c", &(input.op));
 93     }while (input.op == '/');
 94     printf ("Divide.\n");
 95 }
