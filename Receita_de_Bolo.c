#include<stdio.h>
int main()
{
   unsigned char numero_de_passos; 
   unsigned char numero_de_passos_ideal;
   numero_de_passos = 1;
   numero_de_passos_ideal = 15;

   printf ("\n\nInicio da receita:\n");
   printf ("\n- Passo %d da receita\n", numero_de_passos);
   printf ("Preparar os ingredientes do bolo:\n");
   printf ("acucar\nfarinha de trigo\nmargarina\novos\nleite\nfermento\n\n ");

   printf ("Agora que estamos com os ingredientes vamos separar um recepiciente e adicionar-los:\n");
   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("add 2 xicaras (cha) de acucar\n ");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("add 3 xicaras (cha) de farinha de trigo\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("add 4 colheres (sopa) de margarina\n");
   
   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("add 3 ovos\n");

   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("add 1 e 1/2 xicara(cha) de leite\n");
   
   printf ("\n- Passo %d da receita\n", numero_de_passos=numero_de_passos+1);
   printf ("add 1 colher de (sopa) bem cheia de fermento\n\n");
   
   return 0;
}