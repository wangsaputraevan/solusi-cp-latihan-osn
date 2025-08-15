#include <bits/stdc++.h>

#define ll long long

using namespace std;

const int INF = 1e9;

int n, m;
vector<int> h, k, d;
bitset<1000> bought;
vector<int> memo(1000, -INF);

int dp(int money) {
	if (money < 0) return -INF;
	if (money == 0) return 0;
	if (memo[money] != -INF) return memo[money];
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if ((bool)d[i] && bought[i]) continue;
		bought[i] = true;
		ans = max(ans, dp(money - h[i]) + k[i]);
		bought[i] = false;
	}
	memo[money] = ans;
	return memo[money];
}

int main(const int argc, char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int inph, inpk, inpd;
		cin >> inph >> inpk >> inpd;
		h.push_back(inph);
		k.push_back(inpk);
		d.push_back(inpd);
	}
	
	cout << dp(m);
	
	return 0;
}


