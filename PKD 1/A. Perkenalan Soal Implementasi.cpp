#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

#define ll long long

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;

    cin >> m >> n;
    int matrix[n][m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < n; j++) {
        for (int i = m - 1; i >= 0; i--) {
            cout << matrix[i][j];
            if (i != 0) cout << " ";
        } cout << endl;
    }

    return 0;
}

