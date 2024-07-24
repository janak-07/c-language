#include <stdio.h>
#include <string.h>

int factorial(int n)
{
    printf("value of n %d\n", n);
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    printf("hello\tworld\n");
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    int result = factorial(n);
    printf("result is %d\n", result);

    return 0;
}
