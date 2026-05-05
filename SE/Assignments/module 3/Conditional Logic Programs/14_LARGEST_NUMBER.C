// PROGRAM 14 : NESTED IF-ELSE STATEMENT - (START) --------------------->
#include <stdio.h>
void main()
{
   int n1, n2, n3;

   // GET VALUE FROM USER
   printf("Enter Number 1 : ");
   scanf("%d", &n1);
   printf("Enter Number 2 : ");
   scanf("%d", &n2);
   printf("Enter Number 3 : ");
   scanf("%d", &n3);

   // ELSE-IF LADDER CONDITION WITH AND(&&) OPERATOR
   if (n1 > n2 && n1 > n3)
   {
      printf("%d is Greatest", n1);
   }
   else if (n2 > n1 && n2 > n3)
   {
      printf("%d is Greatest", n2);
   }
   else
   {
      printf("%d is Greatest", n3);
   }
}
// PROGRAM 14 : NESTED IF-ELSE STATEMENT - (END) --------------------->