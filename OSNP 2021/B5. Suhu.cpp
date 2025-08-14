#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(const int argc, char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	ll n, m, A, B, q;
	cin >> n >> m >> A >> B >> q;
	vector<ll> L(q);
	vector<pair<ll, ll>> ans(q);
	
	for (ll k = 0; k < q; k++) {
		cin >> L[k];
		
		ll idx = L[k] - 1;
		ll i = (L[k] % m == 0) ? n - L[k]/m : (n - 1) - L[k]/m;
		ll j = (L[k] - 1)%m;
		
		ll divisor = __gcd((j + 1) + B, (i + 1) + A);
		ans[k].first = ((j + 1) + B) / divisor;
		ans[k].second = ((i + 1) + A) / divisor;
	}
	
	for(const pair<ll, ll>& res : ans) {
		cout << res.first;
		cout << "/" << res.second << endl;
	}
	
	return 0;
}

