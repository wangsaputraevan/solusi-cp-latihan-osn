#include <bits/stdc++.h>

#define ll long long

using namespace std;

vector<vector<int>> ds;
string cmd;
bool firstOut;

void printData(int l, int z) {
	if (!firstOut) cout << "\n";
	cout << ds[l - 1][z - 1];
}

void addData(int l, int x, int y) {
	for (int i = 0; i < y; i++) {
		ds[l - 1].push_back(x);
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
	int q, l, x, y, z;
	firstOut = true;
	vector<int> temp = {};
	ds.push_back(temp);
    
    cin >> q;
    for (int i = 0; i < q; i++) {
    	cin >> cmd;
		
		if(cmd == "add") {
			cin >> l >> x >> y;
			addData(l, x, y);	
		}
		if (cmd == "out") {
			cin >> l >> z;
			printData(l, z);
			firstOut = false;
		}
		if (cmd == "new") {
			vector<int> temp;
			ds.push_back(temp);			
		}
	}
    
    return 0;
}

