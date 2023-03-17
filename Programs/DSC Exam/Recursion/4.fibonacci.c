#include <stdio.h>

int fibonacci(int num)
{
    if (num == 1 || num == 0)
        return num;
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
    for (int i = 1; i <= 10; i++)
        printf("%d ", fibonacci(i));
}