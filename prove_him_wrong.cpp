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
		if (n > 19) cout << "NO\n";
		else {
			cout << "YES\n";
			vector<int> ans;
			for (int i = 0; i < n; ++i) {
				ans.push_back(pow(3, i));
			}
			for (int x: ans) {
				cout << x << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}
