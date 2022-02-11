#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, c; cin >> a >> b >> c;
	for(int x = 0; a * x <= c; x++) {
		int y = c - a * x;
		if(y % b != 0) continue;
		puts("Yes");
		return;
	}
	puts("No");
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; // cin >> tc;
	while(tc--) solve();
	return 0;
}

