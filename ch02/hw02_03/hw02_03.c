// hw02_03.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n1, n2, DAYSPERYEAR;
    DAYSPERYEAR = 365;
    n1 = 26;
    n2 = 33;

    printf("%d years = %d days\n", n1, n1 * DAYSPERYEAR);
    printf("%d years = %d days\n", n2, n2 * DAYSPERYEAR);

    system("pause");
    return 0;
}


/*
26 years = 9490 days
33 years = 12045 days
Press any key to continue . . .
*/
