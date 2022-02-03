#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	if(n == 2) {
		cout << -1 << endl;
		return;
	}
	vector<vector<int>> mat(n, vector<int>(n));
	int col = 1, row = 1;
	int cnt = 1;
	for(int i = 0; i < n; i++) {
		mat[i][i] = cnt++;
	}
	while(col <= n && row <= n) {
		if(col < n) {
			for(int i = 0; i < n - col + 1; i++) {
				if(i + col < n) mat[i][i + col] = cnt++;
			}
		} 
		if(row < n) {
			for(int i = 0; i < n - row + 1; i++) {
				if(i + row < n) mat[i + row][i] = cnt++;
			}
		}
		++row; ++col;
	}
	for(auto x: mat) {
		for(auto y: x) {
			cout << y << ' ';
		}
		cout << endl;
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

