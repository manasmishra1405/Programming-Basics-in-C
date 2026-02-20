/*#include <stdio.h>
int main(){
    int i,j,n;

    printf("ENTER THE SIZE OF THE ARRAY:\n");
    scanf("%d", &n);

    int arr[n];
    printf("ENTER THE ARRAYS:\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
     printf("THE ORIGINAL ARRAY:\n");
     for(i=0;i<n;i++)
     printf("%d\t", arr[i]);


    //bubble sort using temp variable
    int temp;
     for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr [j+1])
            {
                temp= arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
     }
     printf("\n THE ARRAY AFTER SORTING: \n");
     for(i=0;i<n;i++){
        printf("%d", arr[i]);
     }
    
return 0;
}*/

#include <stdio.h>
int main(){
    int i,j,n;

    printf("ENTER THE SIZE OF THE ARRAY:\n");
    scanf("%d", &n);

    int arr[n];
    printf("ENTER THE ARRAYS:\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
     printf("THE ORIGINAL ARRAY:\n");
     for(i=0;i<n;i++)
     printf("%d\t", arr[i]);


    //bubble sort without temp variable
     for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr [j+1])
            {
                arr[j]= arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
     }
     printf("\n THE ARRAY AFTER SORTING: \n");
     for(i=0;i<n;i++){
        printf("%d\t", arr[i]);
     }
    
return 0;
}