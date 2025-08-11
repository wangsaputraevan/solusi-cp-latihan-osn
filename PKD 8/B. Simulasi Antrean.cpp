#include <bits/stdc++.h>

#define ll long long

using namespace std;

deque<int> ds;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
	
	int q, x, y;
	bool reversed = false;
	string cmd;
	
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> cmd;
		if (cmd == "add") {
			cin >> x >> y;
			for (int j = 0; j < y; j++)
			ds.push_back(x);
			cout << ds.size();
			if (i != q - 1) cout << "\n";
		}
		
		if (cmd == "del") {
			cin >> y;
			cout << (!reversed ? ds[0] : ds[ds.size() - 1]);
			if (i != q - 1) cout << "\n"; 
			for (int j = 0; j < y; j++) {
				if (!reversed) ds.pop_front();
				else ds.pop_back();
			}
		}
		
		if (cmd == "rev") reversed = !reversed;
	}
    
    return 0;
}

