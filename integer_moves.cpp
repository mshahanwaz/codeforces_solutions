#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
	fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int x, y;
		cin >> x >> y;
		int sqr = x * x + y * y;
		int root = sqrt(sqr);
		int ans = 2;
		if (!x && !y) ans = 0;
		else if (sqr == root * root) 
			ans = 1;
		cout << ans << endl;
	}
	return 0;
}
