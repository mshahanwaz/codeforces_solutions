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
		ll n, s;
		cin >> n >> s;
		ll ans = s / (n * n);
		cout << ans << endl;
	}
	return 0;
}
