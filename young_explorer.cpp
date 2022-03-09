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
		int n;
		cin >> n;
		vector<int> e(n);
		for (int &x: e) {
			cin >> x;
		}
		sort(e.begin(), e.end());
		int ans = 0, curr = 0;
		for (int i = 0; i < n; ++i) {
			++curr;
			if (e[i] == curr) {
				++ans;
				curr = 0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
