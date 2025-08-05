#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, count, add;
	cin >> n;
	vector<char> s(n);
	vector<int> quantity;
	map<char, int> rds;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		if (rds[s[i]] == 0) rds[s[i]] = 1;
		else rds[s[i]]++;
	}
	
	if (n < 3) {
		cout << -1;
		return 0;
	} 
	
	if (n == 3) {
		if (s[0] == s[1] || s[1] == s[2] || s[0] == s[2]) {
			cout << -1;
		} else {
			cout << 3;
		}
		return 0;
	}
	
	for (const auto& pair : rds) quantity.push_back(pair.second);
	std::sort(quantity.begin(), quantity.end());
	
	const int qSize = quantity.size();
	
	if (quantity[qSize - 1] == quantity[qSize - 2] && quantity[qSize - 1] == quantity[qSize - 3]) {
		cout << quantity[qSize - 3]*3;
	} else if (quantity[qSize - 2] == quantity[qSize - 3]) {
		cout << quantity[qSize - 3]*3 + 1;
	} else {
		cout << quantity[quantity.size() - 3]*3 + 2;
	}

	return 0;
}
