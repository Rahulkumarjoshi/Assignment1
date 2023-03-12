#include <stdio.h>
int main()
{
    int n;
    printf("Enter any Number");
    scanf("%d", &n);
    if (n > 0)
        printf("It is a positive number");
        else if (n < 0)
            printf("It is a negative number");
    else
        printf("It is neutral");
    
    return 0;
}