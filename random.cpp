#include <iostream>

constexpr int test2(int e)
{
    return e;
}

constexpr int test(int i)
{
    test2(i);
    return 3;
}

int main()
{
    int y;
    std::cin >> y;
    int x = test(y);
    x = 9;
    std::cout << x;
}