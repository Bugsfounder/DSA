#include <stdio.h>

void deletion(int arr[], int size, int index)
{
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    int arr[100] = {1, 2, 3, 4, 5, 6};
    display(arr, 6);
    deletion(arr, 6, 2);
    printf("\n");
    display(arr, 5);

    return 0;
}
