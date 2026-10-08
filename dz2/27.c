#include <stdio.h>

int main() {
    long double a;
    double ad;
    float af;
    scanf("%Lf", &a);
    ad = (double)a;
    af = (float)a;
    printf("FLOAT: %.6f\nDOUBLE: %.6f\nLDOUBLE: %.6Lf\n", af, ad, a);
    printf("FLOAT+1: %.6f\nDOUBLE+1: %.6f\nLDOUBLE+1: %.6Lf\n", af+1, ad+1, a+1);
    return 0;
}

//потому что у float идёт округление числа до ближайшего возможного представления 24-битным, в случае с примером 123456792
//в таком случае и при прибавлении 1, результат 123456792