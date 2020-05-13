// hw03_05.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    double SEC_PER_YEAR = 3.156E7;
    int age;

    printf("How old are you? ");
    scanf("%d", &age);

    printf("%d year(s) = %lf seconds\n", age, age * SEC_PER_YEAR);

    system("pause");
    return 0;
}


/*

How old are you? 65
65 year(s) = 2051400000.000000 seconds
Press any key to continue . . .

*/
