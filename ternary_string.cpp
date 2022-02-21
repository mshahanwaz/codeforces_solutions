#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	while (tc--) {
		string s;
		cin >> s;
		int ans = 1e8, n = (int)s.length();
		vector<pair<char, int>> c;
		for (int x: s) {
			if (c.empty() || c.back().first != x)
				c.emplace_back(x, 1);
			else
				++c.back().second;
		}
		int m = (int)c.size();
		for (int i = 1; i < m - 1; ++i) {
			if(c[i - 1].first != c[i + 1].first)
				ans = min(ans, c[i].second + 2);
		}
		cout << (ans > n ? 0 : ans) << endl;
    }
	return 0;
}

