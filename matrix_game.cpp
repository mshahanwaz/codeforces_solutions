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
		int n, m;
		cin >> n >> m;
		int a[n][m];
		set<int> r, c;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> a[i][j];
				if (a[i][j])
					r.insert(i), c.insert(j);
			}
		}
		int cnt = min(n - (int)r.size(), m - (int)c.size());
		cout << (cnt % 2 ? "Ashish" : "Vivek") << endl;
    }
	return 0;
}

