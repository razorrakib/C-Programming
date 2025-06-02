#include <stdio.h>
int main()
{
    /*
    to insert an element in the array, we need to move the elements by 1 inderx to the right and
    inssert our new element. To make sure it works as intended , the size should be taken n + 1
    */

    int n;
    scanf("%d", &n);

    int arr[n + 1]; // taking 1 size more for shifting the elements

    // input the array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // now taking the new element index and value
    int idx, val;
    scanf("%d %d", &idx, &val);

    // now shift the elements on the right
    for (int i = n; i >= idx + 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    // updating the new element
    arr[idx] = val;

    // now ouput of the array
    for (int i = 0; i <= n; i++) // make sure that the output limit is till n+1 now
    {
        printf("%d ", arr[i]);
    }

    return 0;
}