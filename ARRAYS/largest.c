#include <stdio.h>
int main()
{
int i,n;

printf("ENTER THE SIZE OF THE ARRAYS:\n");
scanf("%d",&n);

int arr[n];
    printf("ENTER THE ARRAY ELEMENTS:\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

int largest = arr[0];
for(i=1;i<n;i++)
{
if(arr[i]> largest)
{
  largest = arr[i];
}
}
printf("THE LARGEST NUMBER IN THE ARRAY IS:%d\n", largest );

return 0;
}