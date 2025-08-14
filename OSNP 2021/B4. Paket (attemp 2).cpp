#include <bits/stdc++.h>

#define ll long long

using namespace std;

vector<ll> minElement(1e3, 1e9);

ll findIndex(ll num) {
	vector<ll> dv = minElement;
	auto retVal = std::upper_bound(dv.begin(), dv.end(), num);
	auto it = std::find(minElement.begin(), minElement.end(), *retVal);
	ll retIdx = it - minElement.begin();
	return retIdx;
}

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
		if (b[j] > data[idx][lastIdx]) idx = findIndex(b[j]);
		maxIdx = max(maxIdx, idx);
		lastIdx = data[idx].size() - 1;
		data[idx].push_back(b[j]);
		minElement[idx] = b[j];
	}
	
	cout << maxIdx + 1;
	
	return 0;
}
