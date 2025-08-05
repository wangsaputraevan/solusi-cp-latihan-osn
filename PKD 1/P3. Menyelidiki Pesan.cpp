#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	int n;
	map<char, char> dictionary;
	vector<char> charExist;
	cin >> n;
	vector<vector<char>> s(3, vector<char>(n));
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			cin >> s[i][j];
		}
	}
	
	for (int k = 0; k < n; k++) {
		if (dictionary[s[1][k]] != NULL) {
			if (dictionary[s[1][k]] != s[0][k]) {
				cout << "Pak Dengklek bingung";
				return 0;
			}
		} else {
			if (std::find(charExist.begin(), charExist.end(), s[0][k]) == charExist.end()) {
				charExist.push_back(s[0][k]);
				dictionary[s[1][k]] = s[0][k];
			} else {
				cout << "Pak Dengklek bingung";
				return 0;
			}
		}
	}
	
	for (int p = 0; p < n; p++) {
		if (dictionary[s[2][p]] != NULL)
			cout << dictionary[s[2][p]];
		else 
			cout << "?";
	}
	
    return 0;
}
