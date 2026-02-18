#include <stdio.h>
int main()
{
int i,n;

printf("ENTER THE SIZE OF THE ARRAY:\n");
scanf("%d",&n);

int arr[n];
printf("THE ELEMENTS ARE:\n");
for( i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for( i=0;i<n;i++)
printf("THE ARRAY ELEMENTS ARE: %d\n", arr[i]);
return 0;
}