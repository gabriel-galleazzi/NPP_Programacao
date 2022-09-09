/*exercicio 1*/
#include<stdio.h>
void main (void)
{
    int num, tab, resu;
    printf ("Digite um numero para saber a sua tabuada: ");
    scanf ("%d", &num);
    
    printf ("A tabuada do numero %d eh:\n", num);
    tab = -1;
    while (tab<10)
    {
        tab++;
        resu = num * tab;
        printf ("%d x %d = %d\n", num, tab, resu);
    }
}