// This is the preferred C++17 and up way to deal with constants.
// This will declare the value in each file in which it is included. Which will allow for compile time optimization

#ifndef INLINE_CONSTANTS
#define INLINE_CONSTANTS

namespace inline_constants
{
    inline constexpr double gravity {9.8};
    inline constexpr double pi {3.14};
}


#endif