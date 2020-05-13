// hw03_04.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    float n;

    printf("Enter a floating-point value: ");
    scanf("%f", &n);

    printf("fixed-point notation: %f\n", n);
    printf("exponential notation: %e\n", n);
    printf("p notation: %a\n", n);

    system("pause");
    return 0;
}


/*
Enter a floating-point value: 64.25
fixed-point notation: 64.250000
exponential notation: 6.425000e+001
p notation: 0x1.010000p+6
Press any key to continue . . .
*/
