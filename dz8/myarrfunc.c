#include "myarrfunc.h"
#include <stdio.h>
#include <wchar.h>
#include <float.h>

void print_menu(void){
    wprintf(L"\na\tЗадать размер массива\n");
    wprintf(L"b\tЗаполнить массив\n");
    wprintf(L"c\tПредставление массива (значения, адреса)\n");
    wprintf(L"d\tОпределение максимального и минимального значения массива\n");
    wprintf(L"e\tВычисление среднего арифметического элементов всего массива\n");
    wprintf(L"f\tВычисление суммы элементов, значения которых ниже среднего значения массива\n");
    wprintf(L"g\tВыход\n");
    wprintf(L"Выберите пункт: ");
}

double min(double *arrptr, unsigned int n){
    double mini = DBL_MAX;
    for (int i = 0; i<n; i++){
        if(arrptr[i] < mini) mini = arrptr[i]; 
    }
    return mini;
}

double max(double *arrptr, unsigned int n){
    double maxi = DBL_MIN;
    for (int i = 0; i<n; i++){
        if(arrptr[i] > maxi) maxi = arrptr[i]; 
    }
    return maxi;
}

double arithmetic_mean(double *arrptr, unsigned int n){
    double sum = 0;
    for (int i = 0; i<n; i++)sum+=arrptr[i]; 
    
    return (sum/n);
}

unsigned int below_arrays_mean_value(double *arrptr, unsigned int n, double k){
    unsigned int num = 0;
    for (int i = 0; i<n; i++)
        if(arrptr[i] < k) num++; 
    return num;
}