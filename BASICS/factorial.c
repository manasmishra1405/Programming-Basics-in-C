#include <stdio.h>
int main()
{
    int i,n;
    long fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i=0; i<n ;i++)
    {
        fact = fact * (i+1);
    }
    printf("Factorial of %d is %d \n", n, fact);
    return 0;
}