//1
//Разность проводимостей (a - b) / (a ⋅ b)

#include <stdio.h>
double calc(double a, double b);

int main(void){
    double a,b;
    printf("Введите a и b: \n");
    while(scanf("%lf %lf", &a, &b) == 2){
        printf("%.4lf \n", calc(a,b));
        printf("Введите a и b: \n");
    }
    return 0;
}

double calc(double a, double b){
    double diff;
    diff = (a-b) / (a*b);
    return diff;
}