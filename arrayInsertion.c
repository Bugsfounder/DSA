#include <stdio.h>

int insert(int arr[], int size, int capacity, int index, int value)
{
    if (index >= capacity)
    {
        return 0;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = value;
        return 1;
    }
}

int main()
{
    int arr[100] = {1, 3, 5, 6, 7, 8, 9, 10};
    int size = 9, index = 1, value = 2, capacity = 100;
    insert(arr, size, capacity, index, value);

    return 0;
}