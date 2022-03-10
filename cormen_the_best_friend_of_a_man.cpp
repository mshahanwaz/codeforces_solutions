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
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int &x: a) {
			cin >> x;
		}
		int prev = a[0], ans = 0;
		for (int i = 1; i < n; ++i) {
			if (prev + a[i] < k) {
				int diff = k - a[i] - prev;
				ans += diff;
				a[i] += diff;
			}
			prev = a[i];
		}
		cout << ans << endl;
		for (int x: a) {
			cout << x << ' ';
		}
		cout << endl;
	}
    return 0;
}
