#include "my.h"
int main()
{
    extern int foo;
    foo = 55;
    print_foo();
    print(99);
    {
        char cc;
        std::cin >> cc;
    }
}