#include <stdio.h>
// Q. WAP to print only the even number from 1 to 20
int main()
{

    for (int i = 1; i <= 20; i++)
    {

        if (i % 2 == 0)
        {

            printf("%d\n", i);
        }
    }

    return 0;
}