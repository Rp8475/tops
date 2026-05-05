//  PROGRAM 12 : STORE AND PRINT STUDENT NAME IN STRING - (START) --------------------->

#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][100]; // 2D array to store names
    int i;

    // Accept names from the user
    printf("Enter the names of %d students:\n", 5);
    for (i = 0; i < 5; i++)
    {
        printf("Student %d: ", i + 1);
        fgets(names[i], 100, stdin); // Read the name with spaces
        // Remove the trailing newline character if present
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    // Display the names
    printf("\nThe names of the students are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d: %s\n", i + 1, names[i]);
    }
}
//  PROGRAM 12 : STORE AND PRINT STUDENT NAME IN STRING - (END) --------------------->
