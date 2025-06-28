#include <unordered_map>
#include <iostream> // Needed for the console.log equivalent in main

// Translate: const fib = ( n, memo = {}) => { ... };
// In C++, the memoization map must be managed. A static map inside the function
// provides a persistent state across recursive calls, mimicking the shared
// `memo` object in the Javascript example's execution tree.
long long fib(int n) {
    // Translate: memo = {} (implicitly handled by static storage duration in C++)
    static std::unordered_map<int, long long> memo;

    // Translate: if ( n in memo) return memo[n];
    if (memo.count(n)) {
        return memo.at(n); // Use .at() or []
    }

    // Translate: if (n <=2) return 1;
    if (n <= 2) {
        return 1;
    }

    // Translate: memo[n] = fib(n-1, memo) + fib(n-2 , memo);
    // In the C++ static version, the static `memo` is accessed implicitly
    // by subsequent recursive calls to fib(n-1) and fib(n-2).
    memo[n] = fib(n - 1) + fib(n - 2);

    // Translate: return memo[n];
    return memo.at(n); // Use .at() or []
}

// Translate: console.log(fib(6));
int main() {
    std::cout << fib(50) << std::endl;
    return 0;
}