#include "myarrfunc.h"
#include <locale.h>
#include <stdio.h>
#include <wchar.h>

/*
a Задать размер массива
b Заполнить массив
c Представление массива (значения, адреса)
d [Функция 1] \
e [Функция 2] > (название вашей функции)
f [Функция 3] /
g Выход
Выберите пункт: _
*/

//1 12 29

int main(void){
    int a;
    double array[9999];
    unsigned int array_length = 0;
    int made_new_array = 0;

    setlocale(LC_ALL, "");
    print_menu();

    while (((a = getchar()) != EOF) && (a != 'g')){
        switch(a){
            case 'a':
            wprintf(L"Введите размер массива: ");
            scanf("%u", &array_length);
            putchar(10);
            print_menu();
            continue;

            case 'b':
            if (array_length != 0){
                wprintf(L"Введите элементы массива массива(всего %u): ", array_length);
                for (int i = 0; i < array_length; i++){
                    scanf("%lf", &array[i]);
                }
            }
            else{
                wprintf(L"Вы не ввели предварительно размер массива!\n\n");
                }
            print_menu();
            continue;

            case 'c':
            if (array_length != 0){
                made_new_array = 1;
                wprintf(L"Элементы массива: \n");
                for(int i = 0; i<array_length; i++)
                    wprintf(L"%.2lf ", array[i]);
                wprintf(L"\nАдреса: \n");
                for(int i = 0; i<array_length; i++)
                    wprintf(L"%p ", &array[i]); 
                wprintf(L"\n");

            }
            else{
                wprintf(L"Вы не ввели предварительно размер массива!\n\n");
                }
            print_menu();
            continue;

            case 'd':
            if(array_length != 0)
            wprintf(L"Минимум: %.2lf\nМаксимум: %.2lf\n", min(array, array_length), max(array, array_length));
            else wprintf(L"Минимум: 0\nМаксимум: 0\n");
            print_menu();
            continue;

            case 'e':
            if(array_length != 0)
                wprintf(L"Среднее арифметическое: %lf", arithmetic_mean(array, array_length));
            else
                wprintf(L"Среднее арифметическое: 0");
            print_menu();
            continue;

            case 'f':
                if(array_length != 0)
                wprintf(L"Сумма элементов, значения которых ниже среднего значения массива: %u", 
                    below_arrays_mean_value(array, array_length, arithmetic_mean(array, array_length)));
            else
                wprintf(L"Сумма элементов, значения которых ниже среднего значения массива: 0");
            print_menu();
            continue;
        }
    }
    return 0;
}