#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
	fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		ll n, b, x, y;
		cin >> n >> b >> x >> y;
		ll res = 0, prev = 0;
		while (n--) {
			if (prev + x > b) 
				prev -= y;
			else prev += x;
			res += prev;
		}
		cout << res << endl;
	}
	return 0;
}
