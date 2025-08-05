#include <bits/stdc++.h>

#define ll long long
#define vii vector<int>::iterator

using namespace std;
	
int main() {
    int n, k, tempSum = 0;
    cin >> n >> k;
    vector<int> A(n), B(k);
    for (int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	tempSum += x;
    	A[i] = tempSum;
	}
	
    for (int j = 0; j < k; j++) cin >> B[j];
    for (int p = 0; p < k; p++) {
    	int idx = upper_bound(A.begin(), A.end(), B[p]) - A.begin();
        cout << idx << '\n';
    }

    return 0;	
}

