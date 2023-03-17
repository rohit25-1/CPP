#include <iostream>

using namespace std;

template <class T>
T max1(T a, T b)
{
    return (a > b ? a : b);
}

template <class T>
T min1(T a, T b)
{
    return (a < b ? a : b);
}

int main()
{
    int a = 10, b = 20;
    cout << max1(a, b);
}