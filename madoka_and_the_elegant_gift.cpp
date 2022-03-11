#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int dr[] = { 0, 0, 1, 1 };
int dc[] = { 0, 1, 0, 1 };

int main() {
    fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int n, m;
		cin >> n >> m;
		vector<string> s(n);
		for (auto &t: s) {
			cin >> t;
		}
		bool flag = true;
		for (int i = 1; flag && i < n; ++i) {
			for (int j = 1; j < m; ++j) {
				int cnt = 0;
				for (int k = 0; k < 4; ++k)
					if (s[i - dr[k]][j - dc[k]] == '1')
						++cnt;
				if (cnt == 3) {
					flag = false;
					break;
				}
			}
		}
		cout << (flag ? "YES" : "NO") << endl;
	}
    return 0;
}
