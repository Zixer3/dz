#include <stdio.h>

int rounding(double *num);

int main(void){
    double a, b;
    printf("Введите два вещественных числа для преобразований: \n");
    if(scanf("%lf %lf", &a, &b) == 2){
        printf("Изначальные значения: %.2lf %.2lf \n", a, b);

        printf("Преобразованные в целые числа значения: %d %d \n", rounding(&a), rounding(&b));

    }
    else printf("Неверный ввод, повторите программу\n");
    

    return 0;
}

int rounding(double *num){
    int rounded_num = (int)*num;
    double diff = *num - (double)rounded_num;

    if (diff >= 0){
        if (diff >= 0.5) return rounded_num + 1;
        else return rounded_num;
    }
    else{
        if (diff <= -0.5) return rounded_num - 1;
        else return rounded_num;
    }
}