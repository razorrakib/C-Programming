#include <stdio.h>
#include <stdbool.h>

int main()
{

    int x1 = 12;
    float x2 = 1234567.55; // by default 6 decimal will be shown

    char x3 = '#';
    bool x4 = true; // by default shown by int 0 and 1

    printf("Int = %d, Float = %f, Char = %c and Bool = %d \n", x1, x2, x3, x4);

    long long int a;
    double b;
    char c;

    scanf("%lld %lf %c", &a, &b, &c);
    printf("\nLong Long = %lld, Double = %lf and Char = %c", a, b, c);

    return 0;
}