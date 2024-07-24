#include <stdio.h>
// Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do do-while loop.
int main() {
    char ch = 'a';

     do {
        printf("char is %c\nz :", ch);
        ch=ch+3;  
    } while (ch <= 'z');

    return 0;
}