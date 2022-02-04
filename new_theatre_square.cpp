#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc; cin >> tc;
	while(tc--) {
		int n, m, x, y; cin >> n >> m >> x >> y;
		vector<vector<char>> mat(n, vector<char>(m));
		int cnt1 = 0;
		for(auto &x: mat)
			for(auto &y: x) {
				cin >> y;
				if(y == '.') ++cnt1;
			}
		int cnt2 = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 1; j < m; j++) {
				if(mat[i][j] == '.' && mat[i][j - 1] == '.') {
					++j;
					++cnt2;
				}
			}
		}
		cout << min(x * cnt1, x * (cnt1 - 2 * cnt2) + y * cnt2) << endl;
	}
	return 0;
}
