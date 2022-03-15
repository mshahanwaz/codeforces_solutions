#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
	fastIO;
	int TC = 1;
	// cin >> TC;
	while (TC--) {
		int n;
		cin >> n;
		int ans = 0;
		if (n % 2 == 0) {
			ans = 1 << (n / 2);
		} 
		cout << ans << endl;
	}
	return 0;
}
