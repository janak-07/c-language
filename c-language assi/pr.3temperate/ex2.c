// // Q.2 Write a Program to count the total number of digits in a number.

#include <stdio.h>

int main(){
int number,count=0;

printf("enter number");
scanf("%d",&number);
 
while (number!=0)
{
    number/=10;
    count++;
}
printf("count is %d\n",count);

    return 0;
}
