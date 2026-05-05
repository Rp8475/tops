// PROGRAM 31 : CONVERT KILOMETER INTO METERS - (START) -------------------->

#include<stdio.h>
void main(){
    float kMeter;

    printf("Enter Kilometer : ");
    scanf("%f", &kMeter);

    float meter = kMeter * 1000;  // FORMULA TO CONVERT KILOMETER INTO METERS

    printf("%.2f Meters", meter); 
}

// PROGRAM 31 : CONVERT KILOMETER INTO METERS - (END) -------------------->
