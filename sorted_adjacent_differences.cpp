#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int TC = 1;
    cin >> TC;
	while (TC--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int &x: a) {
			cin >> x;
		}
		sort(a.begin(), a.end());
		vector<int> ans(n);
		int pos = n - 1;
		for (int i = n - 1; i >= 0; i -= 2) {
			ans[i] = a[pos];
			--pos;
		}
		pos = 0;
		for (int i = n - 2; i >= 0; i -= 2) {
			ans[i] = a[pos];
			++pos;
		}
		for (int i = 0; i < n; ++i)
			cout << ans[i] << " \n"[i == n - 1];
    }
	return 0;
}

