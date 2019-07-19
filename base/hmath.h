#ifndef HW_MATH_H_
#define HW_MATH_H_
#include <math.h>

static inline unsigned long floor2e(unsigned long num) {
    unsigned long n = num;
    int e = 1;
    while (n>>=1) ++e;
    unsigned long ret = 1;
    while (--e) ret<<=1;
    return ret;
}

static inline unsigned long ceil2e(unsigned long num) {
    // 2**0 = 1
    if (num == 0)   return 1;
    unsigned long n = num;
    int e = 1;
    while (n>>=1) ++e;
    unsigned long ret = 1;
    while (--e) ret<<=1;
    return ret == num ? ret : ret<<1;
}

#endif // HW_MATH_H_
