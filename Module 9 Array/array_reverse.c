#include <stdio.h>
int main()
{
    /*
    using two pointers technique (aka value swap), we can reverse order the array values
    for odd elements, if i == j position, stop reversing
    for even elements, if i > j position, stop reversing
    */

    int n;
    scanf("%d", &n);

    int arr[n];

    // input the array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // now taking the two pointer indexs
    int i = 0;
    int j = n - 1;

    // taking the loop for reversing
    while (i < j) // if i >= j, stop loop
    {
        // using swap techniqe to reverse
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        // update the pointer indexes
        i++;
        j--;
    }

    // print the array elements
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}