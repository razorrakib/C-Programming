#include <stdio.h>
int main()
{
    /*
    to swap values between two eleemnts,
    take a new temporary variable to swap between the two easily
    */

    int a = 10;
    int b = 20;
    int temp = a; // temporary variable

    // now swapping values
    a = b;    // now a = 20
    b = temp; // and b = temp = 10

    printf("A = %d and B = %d", a, b);

    return 0;
}