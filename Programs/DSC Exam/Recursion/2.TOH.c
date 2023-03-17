#include <stdio.h>

void TOH(int num, char source, char destination, char helper)
{
    if (num == 0)
    {
        return;
    }
    TOH(num - 1, source, helper, destination);
    printf("Move From %c to %c\n", source, destination);
    TOH(num - 1, helper, destination, source);
}

int main()
{
    TOH(3, 'a', 'c', 'b'); // source,destination,helper
}