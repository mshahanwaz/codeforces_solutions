#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int cal(int num) {
	int ans = 0;
	while (num) {
		ans += num % 10;
		num /= 10;
	}
	return ans;
}

int main() {
	fastIO;
	int TC = 1;
	// cin >> TC;
	while (TC--) {
		int k;
		cin >> k;
		int ans = 0;
		while (k) {
			++ans;
			if (cal(ans) == 10)
				--k;
		}
		cout << ans << endl;
	}
	return 0;
}
