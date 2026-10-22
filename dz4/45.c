#include <stdio.h>

double mv_to_v(double mv);


int main(void){
    int stat;
    double mv;
    printf("Введите mv: \n");
    stat = scanf("%lf", &mv);
    
    while (stat != 0)
    {
        printf("Тогда v: %.2lf \n", mv_to_v(mv));
        printf("Введите mv: \n");
        stat = scanf("%lf", &mv);
    }

    return 0;
}

double mv_to_v(double mv){
    const double K = 1000;

    double v;
    v = mv / K;

    return v;
}