#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <regex>

#define ll long long

using namespace std;

class Solve {
public:
    vector<int> generatePrimes(int limit) {
        vector<bool> is_prime(limit + 1, true);
        is_prime[0] = is_prime[1] = false;

        for (int i = 2; i * i <= limit; ++i)
            if (is_prime[i])
                for (int j = i * i; j <= limit; j += i)
                    is_prime[j] = false;

        vector<int> primes;
        for (int i = 2; i <= limit; ++i)
            if (is_prime[i]) primes.push_back(i);

        return primes;
    }

    void primeFactorize(int num) {
        vector<int> pf, pow, ap = generatePrimes(num);
        int temp = num;
        for (int i : ap) {
            int cnt = 0;
            if (temp % i != 0) continue;
            while (temp % i == 0) {
                temp /= i;
                cnt++;
            }

            pf.push_back(i);
            pow.push_back(cnt);
        }

        for (int j = 0; j < pf.size(); j++) {
            cout << pf[j];
            if (pow[j] > 1) cout << "^" << pow[j];
            if (j != pf.size() - 1) cout << " x ";
        }
    }
};

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solve solve;

    unsigned int n;
    cin >> n;

    solve.primeFactorize(n);

    return 0;
}
