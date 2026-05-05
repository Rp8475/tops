// PROGRAM 16 : READ TEMPERATURE - (START) --------------------->
#include <stdio.h>
void main()
{
    int Temp;

    // GET VALUE FROM USER
    printf("Enter Temperature : ");
    scanf("%d", &Temp);

    // ELSE-IF LADDER CONDITION WITH AND(&&) OPERATOR
    if (Temp <= 0)
    {
        printf("%d Freezing Weather", Temp);
    }
    else if (Temp > 0 && Temp <= 10)
    {
        printf("%d Very Cold Weather", Temp);
    }
    else if (Temp > 10 && Temp <= 20)
    {
        printf("%d Cold Weather", Temp);
    }
    else if (Temp > 20 && Temp <= 30)
    {
        printf("%d Noraml Temperature", Temp);
    }
    else if (Temp > 30 && Temp <= 40)
    {
        printf("%d Its Hot", Temp);
    }
    else
    {
        printf("%d Its Very Hot", Temp);
    }
}
// PROGRAM 16 : READ TEMPERATURE - (START) --------------------->