#include<stdio.h>
int main()
{
    int idade, x;
    int soma = 0, gordao=0;
    float media, peso;

    for (x=1; x<8 ; x++)
    {
        printf ("Digite a idade da %d pessoa:", x);
        scanf ("%d", &idade);
        soma = soma + idade;
        
        printf ("Digite o peso da %d pessoa:", x);
        scanf ("%f", &peso);  printf ("\n");
       
        if (peso>90) gordao++; //contador do peso acima de 90kg
    }

    media = soma/7; //media da idade

    printf ("Pessoas acima de 90kg: %d\n", gordao);
    printf ("A media da idade das pessoas eh: %.2f\n", media);
}
