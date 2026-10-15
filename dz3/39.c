#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    wchar_t codename[100];
    wscanf(L"%ls", codename);
    wprintf(L"Агент %ls авторизован в системе \n", codename);
    return 0;
}