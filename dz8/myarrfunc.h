#ifndef MYARRFUNC_H
#define MYARRFUNC_H
//int myarrfunc(void);
//<тип_возврата>(<тип_массива> *arrptr, size_t n, ...),
void print_menu(void);
double min(double *arrptr, unsigned int n); //1
double max(double *arrptr, unsigned int n); //1
double arithmetic_mean(double *arrptr, unsigned int n); //12
unsigned int below_arrays_mean_value(double *arrptr, unsigned int n, double k); //k - ср арифметич
//29 Вычисление суммы элементов, значения которых ниже среднего значения массива
#endif