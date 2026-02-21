#include <stdio.h>
int main()
{
    int num, isPrime = 1;
    printf("Enter a number:");
    scanf ("%d", &num);
    if( num == 1 )
    {
        isPrime = 0;
    }
    else
    {
        for(int i=2; i<=num;i++)
        {
            if(num % i==0 && num != i)
            {
                isPrime = 0;
                break;
            }

        }
    }
    if(isPrime)
    {
        printf("%d is a PRIME number", num);
    }
    else
    {
        printf("%d is not a PRIME number", num);
    }
     return 0;
}
