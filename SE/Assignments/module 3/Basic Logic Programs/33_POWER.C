// PROGRAM 33 : READ INTEGER AND PRINT 1ST THEREE POWER (N^1, N^2, N^3) - (START) -------------------->
#include<stdio.h>
    void main(){
        int n,a,b,c;
        printf("enter number:");
        scanf("%d",&n);
        
        // POW IS IN-BUILT FUNCTION THAT IS USED FOR POWER OF NUMBERS
        a = (pow(n,1));  // N^1 = a
        
        b = (pow(n,2));  // N^2 = b
        
        c = (pow(n,3));  // N^3 = c

        printf("N^1 = %d\n",a);
        printf("N^2 = %d\n",b);
        printf("N^3 = %d",c);
    }
// PROGRAM 33 : READ INTEGER AND PRINT 1ST THEREE POWER (N^1, N^2, N^3) - (START) -------------------->