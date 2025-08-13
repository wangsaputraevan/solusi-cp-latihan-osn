#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n;
string s;

vector<ll> O, N;

int main(const int argc, char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n;
	cin >> s;
	
	ll cntO = 0, cntN = 0;
	for (ll i = 0; i < n; i++) {
		if (s[i] == 'O') cntO++;
		if (s[i] == 'S') {
			O.push_back(cntO);
		}
	}
	
	for (ll j = n - 1; j >= 0; j--) {
		if (s[j] == 'N') cntN++;
		if (s[j] == 'S') {
			N.push_back(cntN);
		}
	}
	
	std::reverse(N.begin(), N.end());
	ll ans = 0;
	for (ll k = 0; k < N.size(); k++) {
		ans += O[k] * N[k];
	}
	
	cout << ans;
	
	return 0;
}
