#include <stdio.h>
int main ()
{
    int X, Y, Z;
    X = 8;
    Y = 15;
    Z = 0;
    Z *= X++ * --Y;

    printf ("X = %d\n", X);
    printf ("Y = %d\n", Y);
    printf ("Z = %d\n", Z);

    return 0;
}


