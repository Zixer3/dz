#include <stdio.h>

int main(void){
    unsigned int n;
    int i = 0;
    /*из формулировки задания непонятно, является ли сумма положительных чисел вещественных или целых,
    я сделал сумму вещественных*/
    float sum;
    float number4sum;

    printf("Введите целое число N: \n");
    scanf("%u", &n);

    while(i++ < n){
        scanf("%f",&number4sum);
        sum += number4sum;
    }

    printf("Сумма: %.6f \n", sum);

    return 0;
}