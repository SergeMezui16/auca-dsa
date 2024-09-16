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
    int i = 0;
    printf("Print time table for 8 in one column:\n");
    
    while (i <= 12)
    {
        printf("8 x %d = %d \n", i, i * 8);
        i += 1;
    }

    return 0;
}