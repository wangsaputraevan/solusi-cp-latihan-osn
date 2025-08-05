#include <bits/stdc++.h>

#define ll long long
#define vii vector<int>::iterator

using namespace std;

int binarySearch(vector<int>& data, int x, int y) {
	vii lbData = std::upper_bound(data.begin(), data.end(), x);
	vii ubData = std::upper_bound(data.begin(), data.end(), y);
	
	return ubData - lbData;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    
    cin >> q;
    vector<int> X(q), Y(q);
    for (int j = 0; j < q; j++) cin >> X[j] >> Y[j];
	for (int k = 0; k < q; k++) cout << binarySearch(A, X[k], Y[k]) << endl;	

    return 0;
}
