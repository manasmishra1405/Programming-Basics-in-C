#include <stdio.h>
int main()
{
int i, n;
int sum=0;
printf("ENTER THE SIZE OF THE ARRAY:\n");
scanf("%d",&n);

int arr[n];
printf("THE ELEMENTS OF THE ARRAYS ARE:\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
printf("THE ARAAY: %d\n", arr[i]);

sum =sum + arr[i];
}
printf("THE SUM OF THE ARRAYS IS :%d\n", sum);

return 0;
}
