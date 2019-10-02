#include <iostream>
#include <unordered_map>

std::unordered_map<long, long> cache;

// Recurse from large-to-small.
// Use a cache to look up any previous factorial result.
long factorial(long n) {
    if (n <= 1) return 1;

    if (cache.count(n) > 0) return cache[n];
    std::cout << "\t\tcache miss : " << n << std::endl;
    cache[n] = n * factorial(n - 1);
    return cache[n];
}

void dump_cache(long top_arg) {

    for (long a = top_arg; a >= 0; a--) {
        std::cout << "cached value for  " << a << " is " << cache[a] << std::endl;
    }
}


int main() {
    long top_arg = 20;
    for (long a = top_arg; a >= 0; a--) {

        std::cout << "input: " << a << std::endl;

        long f = factorial(a);
        std::cout << "\tfactorial " << a << " is " << factorial(a) << std::endl;
    }

    std::cout << "\nDumped cache:\n" << std::endl;

    dump_cache(top_arg);
}