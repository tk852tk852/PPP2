#include <iostream>
#include "header.h"
namespace X
{
    int var;
    void print()
    {
        std::cout << var << '\n'
                  << '\n';
    }
}

namespace Y
{
    int var;
    void print()
    {
        std::cout << var << '\n';
    }
}

namespace Z
{
    int var;
    void print()
    {
        std::cout << var << '\n';
    }
}