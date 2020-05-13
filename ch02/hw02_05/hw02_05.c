// hw02_05.c
#include <stdio.h>
#include <stdlib.h>

void br(void);
void ic(void);

int main(void){
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");

    system("pause");
    return 0;
}

void br(void){
    printf("Brazil, Russia");
}

void ic(void){
    printf("India, China");
}


/*
Brazil, Russia, India, China
India, China,
Brazil, Russia
Press any key to continue . . .
*/
