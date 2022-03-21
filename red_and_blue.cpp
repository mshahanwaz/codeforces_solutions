#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int n, m;
int r[105], b[105];
int dp[105][105];

int solve(int i, int j) {
	if (i >= n && j >= m) return 0;
	if (dp[i][j] != -1) return dp[i][j];
	int mx = 0, sum = 0, sum2 = 0;
	if (i < n && j < m) {
		sum = r[i] + solve(i + 1, j);
		sum2 = b[j] + solve(i, j + 1);
	} else if (j < m) 
		sum2 = b[j] + solve(i, j + 1);
	else if (i < n) 
		sum = r[i] + solve(i + 1, j);
	mx = max({mx, sum, sum2});
	return dp[i][j] = mx;
}

int main() {
	fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		memset(dp, -1, sizeof(dp));
		cin >> n;
		for (int i = 0; i < n; ++i) 
			cin >> r[i];
		cin >> m;
		for (int i = 0; i < m; ++i)
			cin >> b[i];
		solve(0, 0);
		cout << dp[0][0] << endl;
	}
	return 0;
}
