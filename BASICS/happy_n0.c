#include <stdio.h>

int sumOfSquares(int n) {
    int sum = 0, digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit;
        n = n / 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 1 && n != 4) {   // 4 indicates loop
        n = sumOfSquares(n);
    }

    if (n == 1)
        printf("Happy Number \n");
    else
        printf("Not a Happy Number \n");

    return 0;
}