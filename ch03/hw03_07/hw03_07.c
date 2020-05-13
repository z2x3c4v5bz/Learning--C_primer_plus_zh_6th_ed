// hw03_07.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    float CM_PER_INCH = 2.54;
    float user;

    printf("以英吋為單位輸入身高: ");
    scanf("%f", &user);

    printf("%f inch = %f cm\n", user, user*CM_PER_INCH);

    system("pause");
    return 0;
}


/*

以英吋為單位輸入身高: 1
1.000000 inch = 2.540000 cm
Press any key to continue . . .

*/
