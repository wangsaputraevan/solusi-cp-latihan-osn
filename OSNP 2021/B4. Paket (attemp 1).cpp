#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(const int argc, char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	ll n;
	cin >> n;
	vector<ll> b(n);
	vector<vector<ll>> data(n, vector<ll>(1, 1e9));
	
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	
	ll idx = 0, maxIdx = 0, lastIdx = 0;
	for (int j = 0; j < b.size(); j++) {
		idx = 0;
		lastIdx = data[idx].size() - 1;
		while (b[j] > data[idx][lastIdx]) {
			idx++;
			lastIdx = data[idx].size() - 1;
			maxIdx = max(maxIdx, idx);
		}
		data[idx].push_back(b[j]);
	}
	
	cout << maxIdx + 1;
	
	return 0;
}

