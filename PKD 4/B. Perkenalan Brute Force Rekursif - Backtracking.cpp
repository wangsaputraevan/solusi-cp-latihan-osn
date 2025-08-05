#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n, k;
vector<int> ans;

void backtracking(int starting) {
	if (ans.size() == k) {
		for (const int& iter : ans) 
			cout << iter << " ";
		cout << endl;
		return;
	}
	
	for (int i = starting; i <= n; i++) {
		ans.push_back(i);
		backtracking(i + 1);
		ans.pop_back();
	}
	
}

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    backtracking(1);

    return 0;
}
