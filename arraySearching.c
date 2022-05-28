#include <stdio.h>

int linearSearch(int arr[], int value, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int value)
{
    int mid, high = size - 1, low = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        if (arr[mid] < value)
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

int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    printf("%d\n", linearSearch(arr, 4, 5));
    printf("%d\n", binarySearch(arr, 5, 5));
    return 0;
}