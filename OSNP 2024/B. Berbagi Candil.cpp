#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll b, c, d, count = 0;
	set<ll> ans;
	
    cin >> b >> c >> d;
	ll r = c - d;
	
	if (!r) {
		if ( b <= c) { cout << 0; return 0; }
		else { cout << (b - c); return 0; }
	}
	
	for (int i = 1; (i*i <= r) && r; i++) {
	 	if (r % i == 0) {
	 		ll x = r / i;
			if (x > d && x <= b) count++;
			if (x != i && i > d && i <= b) count++;
		}
	}

	cout << count;
	
	return 0;
}
