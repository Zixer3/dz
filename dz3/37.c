#include <stdio.h>
#include <string.h>
#define STRCONST1 "LinuxDistro"

const char STRCONST2[5] = {'2','0','2','6','\0'}; 
/*Обратите в н и мание на з а в е р ш а ю щ и й нулевой символ. Без него вы получите символьный массив, а не строку.*/ 
int main(void){
    printf("DISTRO: %s\nRDATE: %s\nSTRLEN: %lu\nSIZEOF: %zu\n", STRCONST1, STRCONST2, strlen(STRCONST1), sizeof(STRCONST1));
    return 0;
}
//длина литерала без терминатора, размер - с
/*
DISTRO: LinuxDistro
RDATE: 2026
STRLEN: 11
SIZEOF: 12
*/