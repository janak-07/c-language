// Q.2 Write a C Program to find gross salary by adding % of HRA, DA, and TA of user choice.

#include <stdio.h>
int main()
{

    float salary, hra, da, ta;

    printf("entre base salary :");
    scanf("%f", &salary);
    printf("entre HRA :");
    scanf("%f", &hra);
    printf("entre DA :");
    scanf("%f", &da);
    printf("entre TA :");
    scanf("%f", &ta);

float grossSalary = salary+(salary*(hra/100))+(salary*(da/100))+(salary*(ta/100));
printf("your gross Salary is %f",grossSalary);
    return 0;
}