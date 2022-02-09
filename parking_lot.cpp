#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll binpow(ll a, ll b) {
	if(b == 0) return 1;
	ll res = binpow(a, b / 2);
	if(b & 1) return res * res * a;
	else return res * res;
}

void solve() {
	int n; cin >> n;
	cout << binpow(4, n - 3) * (3 * n - 1) * 3 << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; // cin >> tc;
	while(tc--) solve();
	return 0;
}

