#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("%d IS AN EVEN NUMBER.\n", num);
    }
    else
        {
            printf("%d IS AN ODD NUMBER.\n", num);
        }
    return 0;
}