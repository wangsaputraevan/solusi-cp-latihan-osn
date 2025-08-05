#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	const vector<string> comp = {"OSN", "ONS", "SNO", "SON", "NOS", "NSO"}; 
    string S;
    int ans = -1;
    cin >> S;

    auto solve = [](string substr, string s) {
        int compIdx = 0, val = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == substr[compIdx]) {
                val++;
                compIdx++;
                compIdx %= 3;
            } 
        }
        
        return val >= 3 ? val : -1;
    };

    for (string i : comp) {
        ans = max(ans, solve(i, S));
    }
    cout << ans;
	
    return 0;
}
