#include <iomanip>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

class Solve {
public:
    void sortString(vector<string> s) {
        std::sort(s.begin(), s.end());
        string temp;
        for (int j = s.size() - 1; j >= 2; j--) {
            for (int i = 2; i <= j; i++) {
                if (s[i].length() < s[i - 1].length()) {
                    temp = s[i - 1];
                    s[i - 1] = s[i];
                    s[i] = temp;
                } 

            }
        }
        
        for (string str : s) {
            cout << str << "\n";
        }
    }
};

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solve solve;

    signed int n;
    cin >> n;
    vector<string> a(n + 1);
    for (int j = 1; j <= n; j++) cin >> a[j];

    solve.sortString(a);

    return 0;
}

