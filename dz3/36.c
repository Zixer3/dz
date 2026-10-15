#include <stdio.h>

int main(void){
    int width;
    char string[20];
    scanf("%s %d", string, &width);

    printf("%*s", width, string);
    printf("\n");
    printf("%-*s", width+5, string);
    printf("\n");
    return 0;
}