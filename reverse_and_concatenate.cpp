#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s, int n) {
	bool flag = true;
	for(int i = 0; flag && i < n / 2; i++) 
		if(s[i] != s[n - i - 1])
			flag = false;
	return flag;
}

void solve() {
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int ans = 1;
	if(k > 0 && !palindrome(s, n)) ans = 2;
	cout << ans << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

