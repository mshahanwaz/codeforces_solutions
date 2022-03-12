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
		sort(a.begin(), a.end());
		int ans = 0;
		if (!k) ans = a[0] - 1;
		else ans = a[k - 1];
		if (ans < 1 || (k < n && a[k] == a[k - 1])) 
			ans = -1;
		cout << ans << endl;
	}
    return 0;
}
