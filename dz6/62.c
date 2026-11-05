#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

int main(void){
    setlocale(LC_ALL, "");

    int charw;
    int counter = 0;
    wchar_t stopper = L'#';

    printf("Вводите для подсчёта управляющих символов: ");
    while ((charw = getwchar()) != WEOF)
    {
        if(charw == stopper)break;
        else{
            if(iswcntrl(charw))counter++;
        }
    }

    printf("\nКол-во управляющих символов: %d\n", counter);
    return 0;
}