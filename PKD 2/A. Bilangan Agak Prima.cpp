#include <iomanip>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

class Solve {
public:
    void isKindaPrime(vector<int> numbers) {
        for (int i : numbers) {
            int cnt = 0;
            for (int j = 1; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    cnt++;
                }
            }

            if (cnt * 2 <= 4) cout << "YA\n";
            else cout << "BUKAN\n";
        }

        return;
    }
};

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solve solve;

    signed int n;
    cin >> n;
    vector<int> a(n);
    for (int j = 0; j < n; j++) cin >> a[j];

    solve.isKindaPrime(a);

    return 0;
}

