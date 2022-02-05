#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n; cin >> n;
	vector<long long> v(n), pref(n + 1), spref(n + 1);
	for(int i = 0; i < n; i++) { 
		cin >> v[i];
		pref[i + 1] = pref[i] + v[i];
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n; i++) 
		spref[i + 1] = spref[i] + v[i];
	int m; cin >> m;
	for(int i = 0; i < m; i++) {
		int type, l, r; cin >> type >> l >> r;
		if(type & 1) {
			cout << pref[r] - pref[l - 1] << endl;
		} else {
			cout << spref[r] - spref[l - 1] << endl;
		}
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; // cin >> tc;
	while(tc--) solve();
	return 0;
}

