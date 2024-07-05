#include <stdio.h>

void traversal(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        printf("Insertion not possible. Array is at full capacity.\n");
        return;
    }
    else
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
    arr[index] = element;
}
int main()
{
    int arr[50] = {1, 2, 3, 4};
    int index = 1, size = 4, capacity = 100, element = 7;
    traversal(arr, size);
    insertion(arr, size, element, capacity, index);
    size++;
    printf("\n");
    traversal(arr, size);
    return 0;
}