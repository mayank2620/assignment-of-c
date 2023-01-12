#include <stdio.h>

int main()
{
    int arr[100], size, i, pos, element;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert an element: ");
    scanf("%d", &pos);

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    // Shifting elements of array after position to right
    for(i=size-1; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }

    // Inserting element at given position
    arr[pos] = element;

    printf("Array after insertion: ");
    for(i=0; i<=size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}