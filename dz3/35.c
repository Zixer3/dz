#include <stdio.h>

int main(void){
    char cha;
    scanf("%c", &cha);
    char prev = (int)cha - 1;
    char next = (int)cha + 1;
    char upper = (int)cha - 32;
    printf("CODE_DEC: %d\nCODE_HEX: %x\nCODE_OCT: %o\nUPPER: %c\nNEXT: %c\nPREV: %c\n", cha, cha, cha, upper, next, prev);
    return 0;
}

/*
CODE_DEC: 109
CODE_HEX: 6d
CODE_OCT: 155
UPPER: M
NEXT: n
PREV: l
*/