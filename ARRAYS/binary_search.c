#include <stdio.h>

int main() {
    int i, n;

    printf("ENTER THE SIZE OF THE ARRAY:\n");
    scanf("%d", &n);

    int arr[n];
    printf("ENTER THE ARRAY (SORTED):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
    }

    int mid, high, low, key;
    low = 0;
    high = n - 1;

    printf("ENTER THE NUMBER TO SEARCH:\n");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;   

        if (arr[mid] == key) {
            printf("ELEMENT FOUND AT INDEX %d\n", mid);
            return 0;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("ELEMENT NOT FOUND *_* \n");
    return 0;
}