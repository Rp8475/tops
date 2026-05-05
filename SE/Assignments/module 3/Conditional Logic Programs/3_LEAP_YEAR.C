// PROGRAM 3 : GIVEN YEAR IS LEAP YEAR OR NOT - (START) --------------------->
#include <stdio.h>
void main()
{
   int y;

   // GET VALUE FROM USER
   printf("Enter a Year : ");
   scanf("%d", &y);

   // IF-ELSE CONDITION
   if (y % 4 == 0) // MODULO : REMAINDER = 0
   {
      printf("%d is Leap year.", y);
   }
   else
   {
      printf("%d is not Leap year!", y);
   }
}
// PROGRAM 3 : GIVEN YEAR IS LEAP YEAR OR NOT - (END) --------------------->