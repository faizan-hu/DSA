#include <iostream>
using namespace std;
#include <vector>

class solution{
    public:
    int countPrimes(int n) {
    if (n <= 2) {
        return 0;
    }

    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    int count = 0;

    for (int i = 2; i * i < n; i++) {
        if (prime[i]) {

            // Mark multiples of i as non-prime
            for (int j = i * i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }

    // Count primes
    for (int i = 2; i < n; i++) {
        if (prime[i]) {
            count++;
        }
    }

    return count;
}
}