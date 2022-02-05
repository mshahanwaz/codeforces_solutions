#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(auto &x: a) cin >> x;
	bool flag = false;

	map<int, vector<int>> mp;
	for(int i = 0; i < n; i++) {
		mp[a[i]].push_back(i + 1);
	}
	for(auto x: mp) {
		if((int)x.second.size() > 2) {
			flag = true;
			break;
		} else if((int)x.second.size() > 1) {
			int cnt = 0;
			for(int i = 1; i < (int)x.second.size(); i++) {
				if(x.second[i] != x.second[i - 1] + 1) {
					flag = true;
					break;
				}
			}
		}
		if(flag) break;
	}

	cout << (flag ? "YES" : "NO") << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

