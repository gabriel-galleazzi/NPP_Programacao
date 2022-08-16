#include<stdio.h>

void main (void)
{
    int overflow, p, q, r;
    //overflow = numero que não pode ser ultrapassado
    // p = inteiro_1
    // q = inteiro_2
    // r = resultado
    char c; // + ou *
   
    scanf("%d", &overflow);
    
    //entrada de P e Q e C
    scanf ("%d %d %c", &p, &q, &c);
    
    
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
    printf ("OVERFLOW\n"); 
    else
    printf ("OK\n");
}