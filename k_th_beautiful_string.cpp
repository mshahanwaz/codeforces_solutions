#include <bits/stdc++.h>
using namespace std;

void solve() {
	long n, k; cin >> n >> k;
	string s(n, 'a');
	for(int i = n - 2; i >= 0; i--) {
		if(k <= n - i - 1) {
			s[i] = 'b';
			s[n - k] = 'b';
			cout << s << endl;
			break;
		}
		k -= n - i - 1;
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

