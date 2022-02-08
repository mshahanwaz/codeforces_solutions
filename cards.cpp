#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int zero = 0, one = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'z') zero++;
		else if(s[i] == 'o') one++;
	}
	one -= zero;
	while(one--) cout << 1 << ' ';
	while(zero--) cout << 0 << ' ';
	cout << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; // cin >> tc;
	while(tc--) solve();
	return 0;
}

