#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <regex>

#define ll long long

using namespace std;

class Solve {
public:
    void printMatrix(string s) {
        unsigned int matrixSize = ceil(sqrt(s.length()));
        while (s.length() != matrixSize * matrixSize) 
            s += ".";
        string temp = "";
        unsigned int strIdx = 0;
        for (int i = 1; i <= matrixSize; i++) {
            temp = s.substr(strIdx, matrixSize);
            strIdx += matrixSize;
            if (i % 2 == 0) std::reverse(temp.begin(), temp.end());
            cout << temp;
            if (i != matrixSize) cout << endl;
        }
        return;
    }
};

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solve solve;

    string s;
    cin >> s;

    solve.printMatrix(s);

    return 0;
}

