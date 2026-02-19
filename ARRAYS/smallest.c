#include <stdio.h>
int main()
{
    int i,n;
    printf("ENTER THE SIZE OF THE ARRAYS:\n");
    scanf("%d", &n);

    int arr[n];
    printf("ENTER THE ARRAY:\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0];
    for(i=1;i<n;i++){
    if (arr[i] < smallest){
        smallest = arr[i];
    }
}
printf("THE SMALLEST NUMBER IN THE ARRAY IS: %d\n", smallest);

return 0;
}