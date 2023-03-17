// Recursion: when a function calls itself, until the base case is met is called recursion.

#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    printf("%d", gcd(9,16));
}