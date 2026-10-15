#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void){
    char string1[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";

    printf("%sSTRLEN:%lu\nSIZEOF:%lu\n", string1,strlen(string1), sizeof(string1));

    return 0;
}

/*в задании мне кажется неправильный вывод
в строке закодированы символы H e l l o табуляция W o r l d*/