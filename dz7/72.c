#include <stdio.h>
//#include <ctype.h> - не нужен для моего варианта
//Количество последовательностей из трех и более одинаковых символов

int main(void){
    int prev_digit = EOF;
    int counter = 0;
    int counter_total = 0;
    int a;

    printf("Введите символы: \n");

    while((a = getchar()) != EOF){
        if(a == prev_digit)counter++;
        else{
            if (counter>=2)counter_total++;
            counter = 0;
        }

        prev_digit = a;
    }

    printf("Количество полседовательностей: %d\n", counter_total);
    return 0;
}