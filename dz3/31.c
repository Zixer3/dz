#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void){
    char sibsu[20] = "SibSUTIS";
    printf("SIZEOF: %lu \nSTRLEN: %lu\nFREE_BYTES: %lu\n", sizeof(sibsu),strlen(sibsu), sizeof(sibsu) - (strlen(sibsu) + 1));

    return 0;
}