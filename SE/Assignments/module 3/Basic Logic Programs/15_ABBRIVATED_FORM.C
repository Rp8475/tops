// PROGRAM 15 : SCHOOLNAME IN ABBRIVATED FORM  - (START) -------------------->
#include<stdio.h>
void main(){
    char fname[20], mname[20], lname[20];

    printf("Enter School name : ");
    scanf("%s %s %s",&fname, &mname, &lname);

    printf("Abbrivated form : ");
    printf("%c.%c %s\n", fname[0], mname[0], lname);
}
// PROGRAM 15 : SCHOOLNAME IN ABBRIVATED FORM  - (END) -------------------->