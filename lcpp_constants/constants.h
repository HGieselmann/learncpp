// Using the header file way is fine for small projects. Each constant is duplicated into each including file as a
// separate constant, which can be optimized away by the compiler.
// In large projects or with large constants, this can become in-efficient, consider using the cpp file way

#ifndef CONSTANTS
#define CONSTANTS

namespace constants
{
    constexpr double gravity{9.8};
    constexpr double pi{3.14};
}

#endif
