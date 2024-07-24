#include <stdio.h>
// Q.3 Write a Program to find the sum of the first and the last digit of a number.
int main() {
    int number, firstDigit, lastDigit, sum;
    printf("Enter a number: ");
    scanf("%d", &number);



    lastDigit = number % 10;

    
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    sum = firstDigit + lastDigit;

    
    printf("The sum of the first and last digit is: %d\n", sum);

    return 0;
}
