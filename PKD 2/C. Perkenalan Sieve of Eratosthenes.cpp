#include <bits/stdc++.h>

#define ll long long

using namespace std;

const int MAX_IT = 1e6;
vector<bool> isPrime(MAX_IT + 1, true);
vector<int> primeNumbers;

void generatePrimes() {
	for (int i = 2; i <= MAX_IT; i++) {
		if (isPrime[i]) {
			primeNumbers.push_back(i);
			for (int j = 2*i; j <= MAX_IT; j += i) {
				isPrime[j] = false;
			}
		}
	}
}

int main(const int agrc, char* agrv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	generatePrimes();
	
	int t;
	cin >> t;
	while (t--) {
		int k;	
		cin >> k;
		cout << primeNumbers[k - 1] << endl;
	}	
    
    return 0;
}

