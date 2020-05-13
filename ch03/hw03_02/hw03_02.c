// hw03_02.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;

    printf("輸入一個數字: ");
    scanf("%d", &n);

    printf("ASCII %d 是 %c.\n", n, n);

    system("pause");
    return 0;
}