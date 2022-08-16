#include<stdio.h>

void main (void)
{
    int overflow, p, q, r;
    //overflow = numero que não pode ser ultrapassado
    // p = inteiro_1
    // q = inteiro_2
    // r = resultado
    char c; // + ou *
   
    printf ("Digite o valor de overflow desejado entre (1 a 500.00):\n"); 
    scanf("%d", &overflow);
    
    //entrada de P e Q e C
    printf ("Digite o valor de P (0 a 1000):\n");
    scanf ("%d", &p);
    
    printf ("Digite o valor de Q (0 a 1000):\n");
    scanf ("%d", &q);

    printf ("Digite + ou *:\n");
    c = getche();
    //printf ("%c\n", c);

    if (c=='+')
       r = p+q;
    else 
      if (c=='*')
      {
        r = p*q;
      }
      else
       printf ("ERROR"); 

    if (overflow<r) 
    printf ("\nVoce teve um OVERFLOW\n"); 
    else
    printf ("\nSeus valores estao OK\n");
}

/*
#include<stdio.h>

void main (void)
{
    int overflow, p, q, r;
   
    char c; // + ou *
   
   //entrada overflow
    scanf("%d", &overflow);
    
    //entrada de P e Q e C
    scanf ("%d %d %c", &p, &q, &c);
    
    //logica para a escolha de + ou *
    if (c=='+')
       r = p+q;
    else 
      if (c=='*')
      {
        r = p*q;
      }
      else
       printf ("ERROR"); 

    //if para saida final
    if (overflow<r) 
    printf ("OVERFLOW\n"); 
    else
    printf ("OK\n");
    return 0;
}
*/