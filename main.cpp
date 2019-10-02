#include <iostream>
#include <unordered_map>

std::unordered_map<long, long> cache;

// Recurese from large-to-small recursively.
// Use a cache to look up previous factorial results
long factorial(long n) {
    if (n <= 1) return 1;

    if (cache.count(n) > 0) return cache[n];
    cache[n] = n * factorial(n - 1);
    return cache[n];
}


int main() {
    for (long a = 20; a >= 0; a--) {
        long f = factorial(a);
        std::cout << "factorial " << a << " is " << factorial(a) << std::endl;
    }

}