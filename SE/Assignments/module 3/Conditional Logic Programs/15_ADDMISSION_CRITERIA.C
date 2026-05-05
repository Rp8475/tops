// PROGRAM 15 : ADMISSION CRITERIA - (START) --------------------->
#include <stdio.h>
void main()
{
    int maths, phy, chem, total, mp;

    // DISPLAY ALL DETAILS
    printf("ELIGIBILITY CRIATERIA FOR ADMISSION IS SHOW BELOW : ");
    printf("\nMarks : Maths >= 65");
    printf("\n        Physics >= 55");
    printf("\n        Chemistry >= 50");
    printf("\nTotal Marks in All 3 Subjects >= 190");
    printf("\nTotal Marks in Maths & Physics >= 140");

    printf("\n\n*****************************************************************\n\n");

    // GET VLAUE FROM USER
    printf("Enter the Obtained Marks : Maths = ", maths);
    scanf("%d", &maths);
    printf("                           Physics = ", phy);
    scanf("%d", &phy);
    printf("                           Chemistry = ", chem);
    scanf("%d", &chem);

    printf("Total Marks in All 3 Subjects = %d\n", maths + phy + chem);
    printf("Total Marks in maths & Physics = %d\n", maths + phy);

    // USING NESTED IF STATEMENT
    if (maths >= 65)
    {
        if (phy >= 55)
        {
            if (chem >= 50)
            {
                if (maths + phy + chem >= 190)
                {
                    if (maths + phy >= 140)
                    {
                        printf("\nStudent is Eligible for Admission to a Professional Course. ");
                    }
                    else
                    {
                        printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
                    }
                }
                else
                {
                    printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
                }
            }
            else
            {
                printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
            }
        }
        else
        {
            printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
        }
    }
    else
    {
        printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
    }

    // SHORT METHOD USING &&(AND) OPERATOR
    if (maths >= 65 && phy >= 55 && chem >= 50 && maths + phy + chem >= 190 && maths + phy >= 140)
    {
        printf("\nStudent is Eligible for Admission to a Professional Course. ");
    }
    else
    {
        printf("\nSorry! Student is not Eligible for Admission to a Professional Course. ");
    }
}
// PROGRAM 15 : ADMISSION CRITERIA - (END) --------------------->