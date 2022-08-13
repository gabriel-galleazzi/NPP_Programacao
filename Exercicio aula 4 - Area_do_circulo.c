#include<stdio.h>
void main(void)
{
    double area, pi, raio;
    pi = 3.14159;
    scanf ("%lf",&raio);
    area = (pi * (raio*raio));
    printf ("A=%.4f\n", area);
    return 0;
}