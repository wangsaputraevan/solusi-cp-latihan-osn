#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <regex>

#define ll long long

using namespace std;

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a, b, temp;
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) {
        temp = a;

        if (temp.erase(i, 1) == b) {
            cout << "Tentu saja bisa!";
            return 0;
        }
    }
    cout << "Wah, tidak bisa :(";

    return 0;
}

