#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s; cin >> s;
	int n = s.length();
	bool flag = false;
	for(int i = n - 1; !flag && i >= 1; i--) {
		int x = s[i] - '0';
		int y = s[i - 1] - '0';
		if((x + y) > 9) {
			s[i] = char('0' + x + y - 10);
			s[i - 1] = '1';
			flag = true;
		}
	}
	if(!flag) {
		int x = s[1] - '0';
		int y = s[0] - '0';
		s[1] = char('0' + x + y);
		s = s.substr(1, n - 1);
	}
	cout << s << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

