#include <stdio.h>

int linear_search(int arr[], int size, int target)
{
    int found = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            found = i;
            return found;
            break;
        }
    }

    return found;
}

/**
 * Linear search
 *
 * Loop for each element until reach the element that we target
 */
int main(int argc, char const *argv[])
{
    int arr[] = {2, 7, 5, 4, 9};
    int size = 5, target = 5, found;
    
    found = linear_search(arr, size, target);

    if (found == -1)
        printf("Element not found");
    else
        printf("Element found in index %d.", found);

    return 0;
}
