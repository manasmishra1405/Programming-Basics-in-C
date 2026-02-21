#include <stdio.h>

int main()
{
    int num, original, reverse = 0, remainder;

    printf("Enter the number:\n");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    original = num;

    /* negative numbers are not treated as palindromes here */
    if (num < 0) {
        printf("%d is not a palindrome number\n", original);
        return 0;
    }

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (original == reverse)
        printf("%d is a PALINDROME number\n", original);
    else
        printf("%d is not a PALINDROME number\n", original);

    return 0;
}