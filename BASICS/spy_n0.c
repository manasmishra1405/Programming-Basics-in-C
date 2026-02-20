#include <stdio.h>

int main() {
    int n, temp;
    int sum = 0;
    int product = 1;

    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    while (n > 0) {
        temp = n % 10;
        sum += temp;
        product *= temp;
        n = n / 10;
    }

    if (sum == product) {
        printf("YES !! THIS IS A SPY NUMBER\n");
    } else {
        printf("NOPE, THIS AIN'T A SPY NUMBER\n");
    }

    return 0;
}