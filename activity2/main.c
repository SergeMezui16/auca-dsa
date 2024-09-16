#include<stdio.h>

/**
 * Activity Two:
 * 
 * Print all integers from 11 down to -20
 * 
 * @author Serge Mezui <sergemezui.dev@gmail.com>
 */
int main()
{
    int i = 11;
    printf("Print all integers from 11 down to -20:\n");
    
    while (i >= -20)
    {
        printf("%d\n", i);
        i -= 1;
    }

    return 0;
}