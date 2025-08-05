#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <regex>

#define ll long long

using namespace std;

class Solve {
public:
    int bubbleSort(vector<int> data) {
        int count = 0;
        for (int i = data.size() - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (data[j] > data[j + 1]) {
                    int temp = data[j + 1];
                    data[j + 1] = data[j];
                    data[j] = temp;
                    count++;
                }
            }
        }
        return count;
    }
};

signed int main(const int argc, char* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solve solve;

    unsigned int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];

    cout << solve.bubbleSort(A);

    return 0;
}
