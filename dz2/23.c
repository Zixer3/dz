#include <stdio.h>
#include <stdbool.h>

int main(){

    int a = 10;
    int b = 010;
    int c = 0x10;
    char aa = 'A';

    printf("DEC_10: %d\nOCT_10: %d\nHEX_10: %d\nINT_SUFFIX: %lu %lu %lu %lu\n", a, b, c, sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
    printf("FLOAT_SUFFIX: %lu %lu %lu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);
    printf("CHAR_FORMS: %d %d %d\n", 'A','\x41','\101');
    printf("CHAR_SIZE: %lu %lu %lu\n", sizeof('A'), sizeof(aa), sizeof("A"));
    return 0;
}
//потому что это ни 0.1f, ни 0.1 не чисто математическое 0.1, а представление в двоичном коде, следовательно знаки после однёрки округляются поразному
//из-за разных размеров