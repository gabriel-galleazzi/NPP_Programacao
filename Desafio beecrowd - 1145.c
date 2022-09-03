//Sequencia Lógica II
/*Resolução Henrique*/
/*#include<stdio.h>
int main()
{
  int flag = 0, x = 0, x2 = 0, y = 0, y2 = 1, i=0;

  scanf("%d %d", &x, &y);

  x2 = x*2;

  while(y2 <= y)
  {
    for(i = 0; i < (x2-1); i++)
    {
      if(flag == 0)
      {
        printf("%d", y2);
        y2++;

        flag = 1;
      }
      else
      {
        printf(" ");

        flag = 0;
      }
      if(y2 > y)
      {
        break;
      }
    }
    printf("\n");
    flag = 0;
  }

  return 0;
}*/


/*Resolução Welitao*/

#include<stdio.h>
int main()
{
  int x, y, resultado = 0;
  char vezes_calculado;

  printf ("Digite um numero de 1 a 20 \n");
  scanf ("%d", &x);

  printf ("Digite um numero menor que 100mil \n");
  scanf ("%d", &y);
  
  //loop
  while (resultado <= (y-1))
   {
    if (resultado == 0)
    {
      resultado = 1;
      printf ("%d ", resultado);
      vezes_calculado = 1;
    }
    else
    {
      resultado = resultado + 1;
      printf ("%d ", resultado);
      vezes_calculado = vezes_calculado + 1;
    }
    if (vezes_calculado == x)
    {
      printf ("\n");
      vezes_calculado = 0;
    }
      
   }
}


/*Minha resolução*/

/*#include <stdio.h>

void main()
{
  int x, y, cont=0, cont2=0;
  
  //entradas
  scanf ("%d %d", &x, &y);
  
  //Controle de entrada
  if ((x<1)||(x>20)) return 0;
  if ((y<x)||(y>100000)) return 0;
    
  //Logica para loop sequencial
  for(cont=1;cont<=y;cont++)
  {
    cont2++;
    if(cont2==x)
    {
      printf("%d\n",cont);
      cont2=0;
    }
    else
    {
      printf("%d ", cont);
    }
  }
   
}*/

/*#include <stdio.h>

int main() 
{
    int num1,num2,cont1,cont2;

    num1=0;
    num2=0;
    cont1=1;
    cont2=0;

   scanf("%d%d",&num1,&num2);
   if((1<num1<20)&&(num2<100000))
   {
     for(cont1=1;cont1<=num2;cont1++)
     {
        cont2++;
        if(cont2==num1)
        {
            printf("%d\n",cont1);
            cont2=0;
        }
          else
          {
            printf("%d ",cont1);
          }
     }
   }
    return 0;
}*/


/*
#include <stdio.h> 
int main() 
{ 
 int i; 
 for(i=1; i<=100; i++) 
 if(!(i%2)) printf("%d \n",i); // o operador de resto dará falso (zero) 
}                              // quando usada c/ número par. Esse resultado
                               // È invertido pelo ! 
*/