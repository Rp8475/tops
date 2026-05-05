// PROGRAM 11 : ACCEPT 5 NAME FROM USER AT RUN TIME - (START) --------------------->
#include <stdio.h>
void main()
{
    char name[30];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("\nName : ");
        scanf("%s", &name);
        printf("Hello %s", name);
        printf("\n");
    }
}
// PROGRAM 11 : ACCEPT 5 NAME FROM USER AT RUN TIME - (END) --------------------->