// 4. Power of an Element Using Divide and Conquer
#include <iostream>
using namespace std;

long long power(long long x, long long y) {
    if (y == 0) return 1;
    long long temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}
