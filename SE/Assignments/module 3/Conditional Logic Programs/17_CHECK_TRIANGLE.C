// PROGRAM 16 : CHECK_TRIANGLE_FORMED_WITH_GIVEN_VALUES - (START) --------------------->
#include <stdio.h>
void main()
{
    int a1, a2, a3;

    // GET VALUE FROM USER
    printf("Eneter the 1st value of angle : ");
    scanf("%d", &a1);

    printf("Eneter the 2nd value of angle : ");
    scanf("%d", &a2);

    printf("Eneter the 3rd value of angle : ");
    scanf("%d", &a3);

    // IF-ELSE CONDITION
    if (a1 + a2 + a3 == 180) // Triangle formula
    {
        printf("This is Triangle.", a1, a2, a3);
    }
    else
    {
        printf("This is not Triangle.");
    }
}
// PROGRAM 16 : CHECK_TRIANGLE_FORMED_WITH_GIVEN_VALUES - (END) --------------------->