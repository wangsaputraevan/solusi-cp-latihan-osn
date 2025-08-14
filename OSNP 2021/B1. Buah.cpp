#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(const int argc, char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

		ll n, a, b;
		cin >> n >> a >> b;
		
		const ll lcm = a*b/__gcd(a, b);
		const ll cntA = (lcm/a);
		const ll cntB = (lcm/b);
		cout << cntA + cntB;
	
	return 0;
}
