#include<stdio.h>

int main()
{
    int LA[100], i, n, pos;

    printf("Enter the number of the elemenets in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements to the array\n", n);

    for ( i = 0; i <= n - 1; i++)
    {
        printf("Insert element at position %d: ", i);
        scanf("%d", &LA[i]);
    }

    printf("Enter the position of the element to delete betweeen %d and %d: ", 0, n - 1);
    scanf("%d", &pos);
    
    if (pos < 0 || pos > n - 1)
    {
        printf("Invalid Position");
        return 1;
    }

    for (i = pos - 1; i < 1; i--)
    {
        LA[i] = LA[i -1];
    }

    n = n - 1;
    

    printf("The array elements after deletion: \n");

    for (i = 0; i < n; i++)
    {
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    return 0;
}
