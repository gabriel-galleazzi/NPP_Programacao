#include<stdio.h>

int main ()
{
    float pp, rpm, rc1, rc2, rc3, rc4, rcr, rd, v1, v2, v3, v4, v5; 
    pp = 2.09; // perimetro do pneu
    rpm = 3000; // rotação por minuto
    rc1 = 3.8; // razão do cambio 1 marcha
    rc2 = 2.06; // razão do cambio 2 marcha
    rc3 = 1.32; // razão do cambio 3 marcha
    rc4 = 0.88; // razão do cambio 4 marcha
    rcr = 3.88; // razão do cambio marcha ré
    rd = 4.37; // razão do diferencial

    v1 = (pp * rpm * 60)/(rc1 * rd * 1000); //60 dentes da roda fonica do motor - 1000 conversão para km
    v2 = (pp * rpm * 60)/(rc2 * rd * 1000); //60 dentes da roda fonica do motor - 1000 conversão para km
    v3 = (pp * rpm * 60)/(rc3 * rd * 1000); //60 dentes da roda fonica do motor - 1000 conversão para km
    v4 = (pp * rpm * 60)/(rc4 * rd * 1000); //60 dentes da roda fonica do motor - 1000 conversão para km
    v5 = (pp * rpm * 60)/(rcr * rd * 1000); //60 dentes da roda fonica do motor - 1000 conversão para km

    printf ("%d\n", v1);
    printf ("%d\n", v2);
    printf ("%d\n", v3);
    printf ("%d\n", v4);
    printf ("%d\n", v5);
}