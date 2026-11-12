#include <stdio.h>

int recursive_factorial(int num);
int cycled_factorial(int num);

int main(void){
    int num;

    printf("Введите целое неотрицательное число: \n");
    if((scanf("%d", &num) == 1) && (num >= 0)){
        printf("Факториал: \nРекурсивно: %d\tЦиклически: %d\n", recursive_factorial(num), cycled_factorial(num));
    }
    else printf("Некорректный ввод\n");

    return 0;
}

int recursive_factorial(int num){
    if (num == 0) return 1;
    else return (num*recursive_factorial(num - 1));
}

int cycled_factorial(int num){
    int factorial = 1;

    if (num == 0) return 1;
    for(int i = num; num > 0; num--){
        factorial *= num;
    }
    
    return factorial;
}