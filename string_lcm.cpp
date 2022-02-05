#include <bits/stdc++.h>
using namespace std;

string mul(string s, int n) {
	string res = "";
	while(n--) res += s;
	return res;
}

void solve() {
	string s, t;
	cin >> s >> t;
	int n = s.length();
	int m = t.length();
	int l = (n * m) / __gcd(n, m);
	if(mul(s, l / n) == mul(t, l / m)) {
		cout << mul(s, l / n) << endl;
	} else cout << -1 << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

