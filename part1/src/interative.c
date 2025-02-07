#include "interative.h"

int gcd_iterative(int m, int n){
    m = abs(m), n = abs(n);
    while(n != 0){
        int tmp = n;
        n = m % n;
        m = tmp;
    }
    return m;
}
