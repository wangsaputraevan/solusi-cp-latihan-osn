#include <bits/stdc++.h>

#define ll long long
#define vii vector<int>::iterator

using namespace std;
	
int solve(vector<int>& data, int x) {
	vii ans = std::lower_bound(data.begin(), data.end(), x);
	return *ans;
}
	
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q, tempSum = 0;
    cin >> n;
	map<int, int> A;
	vector<int> aOriginal(n);
	for (int i = 1; i <= n; i++) {
		int inputUser;
		cin >> inputUser;
		A.insert({tempSum + inputUser, i});
		aOriginal[i - 1] = tempSum + inputUser;
		tempSum += inputUser;
	}
	
	cin >> q;
	vector<int> X(q);
	for (int j = 0; j < q; j++) cin >> X[j];
	
	for (int k = 0; k < q; k++) cout << A[solve(aOriginal, X[k])] << endl;

    return 0;
}
