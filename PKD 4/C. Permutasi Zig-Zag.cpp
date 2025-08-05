#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n;
vector<int> ans;
vector<bool> seen(10, false);

void backtracking() {
	if (ans.size() == n) {
		for (int j = 0; j < n - 2; j++) {
			if (!(min(ans[j], min(ans[j + 1], ans[j + 2])) == ans[j + 1] || 
			max(ans[j], max(ans[j + 1], ans[j + 2])) == ans[j + 1])) {
				return;				
			} 
		}
		for (const int& iter : ans)
			cout << iter;
		cout << endl;
	}
	
	for (int i = 1; i <= n; i++) {
		if (!seen[i]) {
			ans.push_back(i);
			seen[i] = true;
			backtracking();
			ans.pop_back();
			seen[i] = false;
		}
	}
}

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    if (n == 2) {
    	cout << 12 << endl;
    	cout << 21;
    	return 0;
	}
	if (n == 1) {
		cout << 1;
		return 0;
	}
	
	backtracking();

    return 0;
}
