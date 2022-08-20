#include<stdio.h>

void main (void)
{
  int overflow, p, q, r;
  char c; 
    // c == + ou *
    // overflow = numero que não pode ser ultrapassado
    // p = inteiro_1
    // q = inteiro_2
    // r = resultado
  
   
  printf ("Digite o valor de overflow desejado entre (1 a 500.000):\n"); 
    scanf("%d", &overflow);
    if (overflow>500000)
      return 0;
    else
    {
      if (overflow<1)
      {
        return 0;
      }
    }
    

  printf ("Digite o valor de P (0 a 1000):\n");
    scanf ("%d", &p);
    if (p>1000)
      return 0;
    else
    {
      if (p<0)
      {
        return 0;
      }
    }
  

  printf ("Digite + ou *:\n");
    scanf ("%s", &c);
    if (c=='+')
      ; 
    else 
      if (c=='*')
      ;
      else
      return 0;
      
    
  printf ("Digite o valor de Q (0 a 1000):\n");
    scanf ("%d", &q);
    if (q>1000)
     return 0;
    else
    {
      if (q<0)
      {
        return 0;
      }
    }
    

  //logica para soma ou multiplicação
  if (c=='+')
    r = p+q;
  else 
    if (c=='*')
    {
      r = p*q;
    }
  else
    return 0; 

  if (overflow<r) 
    printf ("\nVoce teve um OVERFLOW\n\n"); 
  else
    printf ("\nSeus valores estao OK\n\n");
}