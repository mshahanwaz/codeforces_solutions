#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	while (tc--) {
		ll n;
		cin >> n;
		vector<ll> a(n);
		for (ll &x: a) 
			cin >> x;
		bool is_possible = true;
		int prevOdd = -1;
		int prevEven = -1;
		for (int i = 0; is_possible && i < n; ++i) {
			if (a[i] & 1) {
				if (prevOdd == -1) prevOdd = a[i];
				else {
					if (prevOdd > a[i]) is_possible = false;
					else prevOdd = a[i];
				}
			} else {
				if (prevEven == -1) prevEven = a[i];
				else {
					if (prevEven > a[i]) is_possible = false;
					else prevEven = a[i];
				}
			}
		}
		cout << (is_possible ? "YES" : "NO") << endl;
    }
	return 0;
}

