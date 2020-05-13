// hw02_04.c
#include <stdio.h>
#include <stdlib.h>

void jolly(void);
void deny(void);

int main(void){
    printf("For he's a ");
    jolly();
    printf(" fellow!\n");

    printf("For he's a ");
    jolly();
    printf(" fellow!\n");

    printf("For he's a ");
    jolly();
    printf(" fellow!\n");

    deny();

    system("pause");
    return 0;
}

void jolly(void){
    printf("jolly good");
}

void deny(void){
    printf("Which nobody can deny!\n");
}


/*

For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny!
Press any key to continue . . .

*/
