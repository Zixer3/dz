#include <stdio.h>
//<wchar.h>, <string.h> и <locale.h>.
#include <wchar.h>
#include <string.h>
#include <locale.h>



int main(void){
    setlocale(LC_ALL, "");
    const char stringchar[] = "Сбой матрицы";
    const wchar_t stringwchar[] = L"Сбой матрицы"; //не хотела глобально задаваться

    printf("char -> sizeof: %zu bytes, stlen: %lu chars\n", sizeof(stringchar), strlen(stringchar));
    printf("wchar -> sizeof: %zu bytes, stlen: %lu chars\n",sizeof(stringwchar), wcslen(stringwchar));
    return 0;
}

/*
char -> sizeof: 24 bytes, strlen: 23 chars
wchar -> sizeof: 52 bytes, wcslen: 12 chars
*/