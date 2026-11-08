#include <stdio.h>
#include <math.h>
//Степень первого числа по основанию второго

double exponentiation(double a, double b);

int main(void){
    double a,b;

    printf("Введите два числа для преобразований: \n");
    while(scanf("%lf %lf", &a, &b) == 2){
        if(a>=0.0)printf("a**b = %.4lf\n", exponentiation(a,b));
        else printf("некорректный ввод\n");
    }
    printf("Конец программы \n");

    return 0;
}

double exponentiation(double a, double b){ //a**b = e**(b * ln(a))
    double result = 1;

    result = exp(b * log(a));
    return result;
}