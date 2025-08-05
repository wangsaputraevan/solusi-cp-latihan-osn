#include <iostream>
#include <climits>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

class Solve {
public:
    int search(vector<int> arr, int target) {
        int ans = INT_MAX, diff = INT_MAX;
        for (int i = 0; i < arr.size(); i++) {
            int d = abs(target - arr[i]);
            if (d < diff || (d == diff && arr[i] < ans)) {
                diff = d;
                ans = arr[i];
            }
        }
        return ans;
    }
};

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solve solve;
    
    signed int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int j = 0; j < n; j++) cin >> a[j];

    cout << solve.search(a, x);

    return 0;
}
