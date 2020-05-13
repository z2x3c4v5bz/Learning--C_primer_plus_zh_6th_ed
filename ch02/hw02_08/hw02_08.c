// hw02_08.c
#include <stdio.h>
#include <stdlib.h>

void one_three(void);
void two(void);

int main(void){
    printf("starting now:\n");
    one_three();
    printf("Done!\n");

    system("pause");
    return 0;
}

void one_three(void){
    printf("one\n");
    two();
    printf("three\n");
}

void two(void){
    printf("two\n");
}


/*
starting now:
one
two
three
Done!
Press any key to continue . . .
*/
