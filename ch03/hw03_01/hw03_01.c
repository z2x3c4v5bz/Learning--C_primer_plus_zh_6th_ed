// hw03_01.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a = 2147483647;
    float b = 3.4E38;
    float c = 1.234567E-42;

    printf("a = %d, a + 1 = %d\n", a, a + 1);
    printf("b = %e, b * 100 = %e\n", b, b * 100);
    printf("c = %e, c / 10 = %e\n", c, c / 10); // idk how to make underflow

    system("pause");
    return 0;
}