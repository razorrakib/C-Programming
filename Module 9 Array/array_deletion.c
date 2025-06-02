#include <stdio.h>
int main()
{
    /*
    to delete an element in the array, we need to move the elements by 1 inderx to the left
    */

    int n;
    scanf("%d", &n);

    int arr[n];

    // input the array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // now taking the index for deleteing
    int idx;
    scanf("%d", &idx);

    // now shift the elements on the left for deletion
    for (int i = idx; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    // now ouput of the array
    for (int i = 0; i < n - 1; i++) // make sure that the output limit is till n-1 now
    {
        printf("%d ", arr[i]);
    }

    return 0;
}