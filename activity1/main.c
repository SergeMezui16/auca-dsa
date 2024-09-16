#include<stdio.h>

/**
 * Activity One:
 * 
 * Print the time table for 8 in one column
 * 
 * @author Serge Mezui <sergemezui.dev@gmail.com>
 */
int main()
{
    printf("Print time table for 8 in one column:\n");

    for (int i = 0; i <= 12; i++)
    {
        printf("8 x %d = %d \n", i, i * 8);
    }

    return 0;
}