#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	if(n < 4) {
		cout << "NO" << endl;
		return;
	}
	for(int i = 0; i < 5; i++) {
		string s1 = s.substr(0, 4 - i) + s.substr(n - i, i);
		if(s1 == "2020") {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

