// Q.1 Write a Program to convert temperature from degrees Celsius to Fahrenheit Use formula for °C to °F is: ° F = ( °C × 9/5 ) + 32
#include <stdio.h>
int main (){

float f,c;

printf ("enter the tempreture in celcius :");
scanf("%f",&c);

f =(c*9/5)+32;
printf ("tempreture in fahrenheit %f",f);
    return 0;
} 