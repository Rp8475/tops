// PROGRAM 7 : COPY ONE STRING TO ANOTHER STRING - (START) --------------------->

#include <stdio.h>
#include <string.h>
void main()
{
    // Initialize
    char a[10], b[10];

    printf("Enter string : ");
    gets(a); // work like scanf();

    // strcpy() is used to define copy one string to another
    // a = Usre's String
    // b = Copied String
    strcpy(b, a);
    printf("String number 2 is : %s", b);
}

// PROGRAM 7 : COPY ONE STRING TO ANOTHER STRING - (END) --------------------->