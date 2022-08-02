#include<stdio.h>
int main()
{
   unsigned char numero_de_passos; 
   unsigned char numero_de_passos_ideal;
   numero_de_passos = 1;
   numero_de_passos_ideal = 15;

   printf ("\n\nInicio da receita:\n");
   printf ("\n- Passo %d da receita\n", numero_de_passos);
   printf ("Preparar os ingredientes do bolo(comprar):\n");
   printf ("acucar\nfarinha de trigo\nmargarina\novos\nleite\nfermento\n\n ");

   printf ("Agora que estamos com os ingredientes vamos separar a quantidade que iremos usar:\n");
   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Separar 2 xicaras (cha) de acucar\n ");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Separar 3 xicaras (cha) de farinha de trigo\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Separar 4 colheres (sopa) de margarina\n");
   
   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Separar 3 ovos\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Separar 1 e 1/2 xicara(cha) de leite\n");
   
   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Separar 1 colher de (sopa) bem cheia de fermento\n\n");
   
   printf ("Agora que temos tudo separado iremos para o PREPARO: ^^");
   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Separe a clara da gema do ovo\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Bata as claras em neve e reserve\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Misture as gemas, a margarina e o acucar ate ter uma massa\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Acrescente o leite e a farinha de trigo aos poucos, sem parar de bater\n");
   
   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Por ultimo, add as clara e neve e o fermento\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("unte uma forma grande com a margarina \n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("e jogue farinha em cima da forma untada\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Despeje a massa na forma untada\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("acenda o forno em 180 C\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Coloque o bolo no forno\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Espere 45 minutos\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Retire o bolo do forno\n\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("Coloque na mesa com o cafe \n\n");
   //Passo Final 
 /*  if (numero_de_passos==numero_de_passos_ideal)
   {
      printf ("Seu bolo ficou perfeito!!!\nBom Apetite hehe `-´ ");
   }
   else 
   {
      printf ("Voce nao sabe fazer bolo compre um ^^\n");
   }
*/

   //Desafio
   if (numero_de_passos==numero_de_passos_ideal)
   {
      printf ("seu bolo esta ideal ^^\n\n");
   }
   else 
   { if (numero_de_passos>numero_de_passos_ideal)
   {
      printf ("Seu bolo esta muito complexo =-|\n\n");
   }
   else 
   {
      printf ("Voce nao sabe fazer bolo compre um +_-\n\n");
   }
   }
   return 0;
}