#include <iostream>
#include <climits>
#include <iomanip>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

class Solve {
public:
    float getMedian(vector<int> data) {
        std::sort(data.begin(), data.end());
        const int n = data.size() - 1;
        if (n % 2 == 0) 
            return (data[n / 2] + data[(n / 2) + 1]) / 2.0;
        else 
            return data[(n + 1) / 2] * 1.0;
    }
};

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solve solve;
    
    signed int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int j = 1; j <= n; j++) cin >> a[j];

    cout << fixed << setprecision(1) << solve.getMedian(a);

    return 0;
}

