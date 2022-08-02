#include<stdio.h>
int main()
{
   unsigned char numero_de_passos; 
   unsigned char numero_de_passos_ideal;
   numero_de_passos = 1;
   numero_de_passos_ideal = 15;

   printf ("\n\nInicio da receita:\n");
   printf ("\nPasso %d da receita\n\n", numero_de_passos);
   printf ("Preparar os ingredientes do bolo:\n");
   printf ("acucar\nfarinha de trigo\nmargarina\novos\nleite\nfermento\n\n ");

   printf ("Agora que estamos com os ingredientes vamos separar um recepiciente e adicionar-los:\n");
   printf ("Passo %d da receita\n\n", numero_de_passos=numero_de_passos+1);
   printf ("2 xicaras (cha) de acucar\n\n ");

   printf ("Passo %d da receita\n\n", numero_de_passos=numero_de_passos+1);
   printf ("3 xicaras (cha) de farinha de trigo\n");

   printf ("Passo %d da receita\n\n", numero_de_passos=numero_de_passos+1);
   printf ("4 colheres (sopa) de margarina\n");
   
   printf ("Passo %d da receita\n\n", numero_de_passos=numero_de_passos+1);
   printf ("3 ovos\n");

   printf ("Passo %d da receita\n\n", numero_de_passos=numero_de_passos+1);
   printf ("1 e 1/2 xicara(cha) de leite");
   
   printf ("Passo %d da receita\n\n", numero_de_passos=numero_de_passos+1);
   printf ("1 colher de (sopa) bem cheia de fermento\n");
   
   return 0;
}