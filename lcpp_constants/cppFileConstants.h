// The declaration via cpp file constants uses external variables which are truly global. Nice!
// But! These are not compile-time constant for all other files. Can't be optimized by the compiler... too bad...

#ifndef CPP_FILE_CONSTANTS
#define CPP_FILE_CONSTANTS

namespace cppConstants
{
    extern const double gravity;
    extern const double pi;
}

#endif