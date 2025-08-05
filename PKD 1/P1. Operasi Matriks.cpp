#include <iostream>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

class Solve {
public:
    vector<vector<int>> matrix;

    void reflect(char axis) {
        int n = matrix.size(), m = matrix[0].size();
        if (axis == '_') {
            reverse(matrix.begin(), matrix.end());
        } else if (axis == '|') {
            for (int i = 0; i < n; ++i) {
                reverse(matrix[i].begin(), matrix[i].end());
            }
        }
    }

    void rotate90() {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> rotated(m, vector<int>(n));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                rotated[j][n - 1 - i] = matrix[i][j];
        matrix = rotated;
    }

    void process(vector<string>& ops) {
        for (string& op : ops) {
            if (op == "90") rotate90();
            else if (op == "180") {
                rotate90();
                rotate90();
            }
            else if (op == "270") {
                rotate90();
                rotate90();
                rotate90();
            }
            else if (op == "_") reflect('_');
            else if (op == "|") reflect('|');
        }
    }

    void print() {
        for (auto& row : matrix) {
            for (int val : row) cout << val << " ";
            cout << "\n";
        }
    }
};

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, x;
    cin >> n >> m >> x;

    Solve solver;
    solver.matrix.resize(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> solver.matrix[i][j];

    vector<string> ops(x);
    for (int i = 0; i < x; ++i)
        cin >> ops[i];

    solver.process(ops);
    solver.print();

    return 0;
}

