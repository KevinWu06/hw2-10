#include "recursive.h"

int gcd_recursive(int m, int n){
    m = abs(m), n = abs(n);
    if(m == 0) return n;
    if(n == 0) return m;
    if(m > n) {
        m = m % n;
        return gcd_recursive(m, n);
    } else {
        n = n % m;
        return gcd_recursive(n, m);
    }
}
