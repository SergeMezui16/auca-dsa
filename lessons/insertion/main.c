#include<stdio.h>

/**
 * Print an empty array, insert values
 * then print the updated array.
 * 
 * @author Serge Mezui<sergemezui.dev@gmail.com>
 */
int main(int argc, char const *argv[])
{
    int LA[3] = {0, 0, 0};

    printf("Array Before Insertion: \n");

    for (int i = 0; i < 3; i++)
    {
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    printf("The array elements after insersion: \n");

    for (int i = 0; i < 3; i++)
    {
        LA[i] = i + 2;
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    return 0;
}
