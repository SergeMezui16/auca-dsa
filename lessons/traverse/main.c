#include<stdio.h>

/**
 * Traverse and print all element of an array
 * 
 * @author Serge Mezui<sergemezui.dev@gmail.com>
 */
int main(int argc, char const *argv[])
{
    int i, n = 5;

    int LA[] = {1, 3, 5, 7, 8};

    printf("The original array elements are :\n");

    for (int i = 0; i < n; i++)
    {
        printf("LA[%d] = %d \n", i, LA[i]);
    }
    
    return 0;
}
