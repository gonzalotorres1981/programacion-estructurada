#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A= 'a';
    signed char B=-12;
    unsigned char C=125;
    short D=-30500;
    signed short E=-15;
    unsigned short F=180;
    int G=190;
    signed int H=-1256;
    unsigned int I=590;
    long J=100600;
    signed long K=-3020;
    unsigned long L=101456;
    long long M= 304560;
    signed long long N=-1500;
    unsigned long long O=355500;
    float P=98.5639;
    double Q=2.345632;
    long double R=5.6754322323L;

    printf("La direccion del char A es %d y su valor es %c\n",&A,A);
    printf("La direccion del signed char B es %d y su valor es %d\n",&B,B);
    printf("La direccion del unsigned char C es %d y su valor es %d\n",&C,C);
    printf("La direccion del short D es %d y su valor es %hd\n",&D,D);
    printf("La direccion del signed short E es %d y su valor es %hd\n",&E,E);
    printf("La direccion del unsigned short F es %d y su valor es %hu\n",&F,F);
    printf("La direccion del int G es %d y su valor es %d\n",&G,G);
    printf("La direccion del signed int H es %d y su valor es %d\n",&H,H);
    printf("La direccion del unsigned int I es %d y su valor es %d\n",&I,I);
    printf("La direccion del long J es %d y su valor es %ld\n",&J,J);
    printf("La direccion del signed long K es %d y su valor es %ld\n",&K,K);
    printf("La direccion del unsigned long L es %d y su valor es %lu\n",&L,L);
    printf("La direccion del long long M es %d y su valor es %lld\n",&M,M);
    printf("La direccion del signed long long N es %d y su valor es %lld\n",&N,N);
    printf("La direccion del unsigned long long O es %d y su valor es %llu\n",&O,O);
    printf("La direccion del float P es %d y su valor es %f\n",&P,P);
    printf("La direccion del double Q es %d y su valor es %f\n",&Q,Q);
    printf("La direccion del long double R es %d y su valor es %.15f\n",&R,(double)R);

    return 0;
}
