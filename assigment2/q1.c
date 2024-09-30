#include <stdio.h>
#include <limits.h>

/**
 * Return the index of the largest element of an int array
 * 
 * @return int
 */
int location_of_largest(int arr[], int size)
{
    if (size <= 0) {
        return -1;
    }

    int index = 0;
    int value = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] > value) {
            value = arr[i];
            index = i;   
        }
    }

    return index;
}

int main(int argc, char const *argv[])
{
    int arr1[] = {58, 26, 90, 34, 71};
    int arr2[] = {58, 26, 91, 34, 70, 91, 88};

    printf("Index 1: %d \n", location_of_largest(arr1, 5));
    printf("Index 2: %d", location_of_largest(arr2, 7));

    return 0;
}
