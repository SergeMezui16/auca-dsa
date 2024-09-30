#include <stdio.h>
#include <limits.h>

int max(int arr[], int size)
{
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int sum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        // Swap the elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int avg(int arr[], int size)
{
    return sum(arr, size) / size;
}

void print(int arr[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            printf("%d", arr[i]);
            continue;
        }

        printf("%d, ", arr[i]);
    }

    printf("]\n");
}

int main(int argc, char const *argv[])
{
    int arr[] = {58, 26, 91, 34, 70, 91, 88};
    int choice, size = 7;

    print(arr, size);

    printf("\n1. Find the Maximum Element\n");
    printf("2. Find the Sum of all Elements\n");
    printf("3. Reverse an Array Elements\n");
    printf("4. Find the Average of Array Elements\n");

    printf("\nSelect your choice: ");
    scanf("%i", &choice);

    switch (choice)
    {
    case 1:
        printf("The max element is: %d", max(arr, size));
        break;
    case 2:
        printf("The sum of the elements is: %d", sum(arr, size));
        break;
    case 3:
        printf("The reversed array is :");
        reverse(arr, size);
        print(arr, size);
        break;
    case 4:
        printf("The average of the elements is: %d", avg(arr, size));
        break;
    default:
        printf("Please select a valid choice !");
        break;
    }

    return 0;
}
