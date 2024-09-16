#include<stdio.h>

/**
 * Write a program that permits user to add 
 * elements to an array and update one of then 
 * once finished.
 * 
 * @author Serge Mezui<sergemezui.dev@gmail.com>
 */
int main(int argc, char const *argv[])
{
    
    float LA[100];
    int n, i, pos;

    printf("Enter the size of that array: ");
    scanf("%d", &n);

    printf("Enter data in the array...\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter at position %d: ", i);
        scanf("%f", &LA[i]);
        printf("LA[%d] = %f added. \n", i, LA[i]);
    }

    printf("Enter the position of the new element: ");
    scanf("%d", &pos);

    if(pos < 0 || pos > n) {
        printf("Invalid Position");
        return 1;
    }

    printf("Enter the value of the element at position %d: ", pos);
    scanf("%f", &LA[pos]);

    printf("The final array is: \n");

    for (i = 0; i < n; i++)
    {
        printf("LA[%d] = %f \n", i, LA[i]);
    }

    return 0;
}
