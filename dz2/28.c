#include <stdio.h>
#include <float.h>
#include <stdbool.h>

int main() {
    printf("FLOAT: size=%lu,digits=%d,max=%e\n", sizeof(float), FLT_DIG, FLT_MAX);
    printf("DOUBLE: size=%lu,digits=%d,max=%e\n", sizeof(double), DBL_DIG, DBL_MAX);
    printf("LDOUBLE: size=%lu,digits=%d,max=%Le\n", sizeof(long double), LDBL_DIG, LDBL_MAX);
    return 0;
}

// количество цифр в показателе степени может отличаться в зависимости от системы
// на некоторых платформах long double может совпадать по размеру с double

//FLOAT: size=4, digits=6, max=3.402823e+38
//DOUBLE: size=8, digits=15, max=1.797693e+308
//LDOUBLE: size=16, digits=18, max=1.189731e+4932
