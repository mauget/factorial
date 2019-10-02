#include <iostream>
#include <unordered_map>

std::unordered_map<long, long> cache;

// Recurse from large-to-small.
// Use a cache to look up any previous factorial result.
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