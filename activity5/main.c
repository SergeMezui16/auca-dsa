#include <stdio.h>

int binary_search(int arr[], int size, int target)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 4, 7, 9};
    int target = 10, size = 5;

    int result = binary_search(arr, size, target);

    if(result == -1) printf("Element not found!");
    else printf("Element found in index: %d", result);

    return 0;
}
