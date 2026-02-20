#include <stdio.h>
int main(){
    int i,n;
    printf("ENTER THE SIZE OF THE ARRAY:\n");
    scanf("%d", &n);

     int arr[n];
     printf("ENTER THE ELEMENTS OF THE ARRAY:\n");
     for( int i=0;i<n;i++){
     scanf("%d", &arr[i]);
     }

     printf("THE ORIGINAL ARRAY:\n");
     for(i=0;i<n;i++){
        printf("%d\n", arr[i]);
     }

     printf("\nTHE REVERSED ARRAY :\n");
     for(i=n-1; i>=0; i--){
        printf("%d\n", arr[i]);
     }
   return 0;
}