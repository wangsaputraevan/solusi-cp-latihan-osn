#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(const int argc, char* argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int a, b, c, d;
	cin >> a >> b;
	cin >> c >> d;
	
	ll f = (b*d)/((__gcd(a*d + b*c, b*d)));
	ll e = (a*d + b*c)/(__gcd(a*d + b*c, b*d));
	
	cout << e << " " << f;
	
	return 0;
}
