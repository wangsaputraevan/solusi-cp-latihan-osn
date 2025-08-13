#include <bits/stdc++.h>

#define ll long long

using namespace std;

const int INF = 1e9;
const int LIM = 5e4;

int n, k;
vector<int> coin;
vector<int> memo(LIM, -1);

int dp(int change) {
	if (change < 0) return INF;
	if (change == 0) return 0;
	if (memo[change] != -1) return memo[change];
	int minimum = INF;
	for (int j = 0; j < n; j++) {
		minimum = min(minimum, dp(change - coin[j]));
	}
	memo[change] = minimum + 1;
	return memo[change];
}

int main(const int argc, char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		coin.push_back(input);
	}
	cin >> k;
	
	if (dp(k) == INF + 1) cout << -1;
	else cout << dp(k);
	
	return 0;
}
