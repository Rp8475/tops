// PROGRAM 18 : TABLES - (START) --------------------->
#include <stdio.h>
void main()
{
    int i, n;

    printf("Enter Integer : ");
    scanf("%d", &n);

    // USING FOR LOOP
    for (i = 1; i <= 10; i++)
    {
        // Print the table
        printf("%d * %d = %d\n", n, i, n * i);
    }

    // USING WHILE LOOP
    // int i=1, n;
    //  printf("Enter Integer : ");
    //  scanf("%d", &n);
    //  while(i<=10){
    //      printf("%d * %d = %d\n", n,i,n*i);
    //      i++;
    //  }
}
// PROGRAM 18 : TABLES - (END) --------------------->