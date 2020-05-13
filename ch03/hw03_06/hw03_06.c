// hw03_06.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    double m = 3.0E-23;
    float n;
    int g = 950;

    printf("以夸脫為單位輸入水量: ");
    scanf("%f", &n);

    printf("這裏頭有 %lf 個水分子。\n", n * g / m);

    system("pause");
    return 0;
}


/*
以夸脫為單位輸入水量: 0.0001
這裏頭有 3166666626930236700000.000000 個水分子。
Press any key to continue . . .
*/
