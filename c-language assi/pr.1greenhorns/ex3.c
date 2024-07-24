// Q.3 Write a C Program to find the third angle of a right triangle if two other angles are given.

#include <stdio.h>

int main (){

int firstAngle , secondAngle , thrirdAngle;

printf("Enter First Angle :");
scanf("%d",&firstAngle);
printf("Enter Second Angle :");
scanf("%d",&secondAngle);

thrirdAngle =180 - (firstAngle + secondAngle);

printf ("Your Third Angle %d" ,thrirdAngle);
    return 0;
}