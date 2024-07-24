// Q.1 Write a Program to check whether a number is even or odd using the ternary operator.

#include <stdio.h>

int main() {
    int number;

 
    printf("Enter an integer: ");
    scanf("%d", &number);
 
 if (number % 2 ==0)
 {
printf("%d is even.\n", number);
 }else{
printf("%d is odd.\n", number); }

    return 0;
}
