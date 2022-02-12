#include <bits/stdc++.h>

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

using namespace std;
using ll = long long;

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		vector<pair<int, int>> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i].first;
			a[i].second = i + 1;
		}
		sort(a.begin(), a.end());
		deque<int> ans;
		bool flag = false;
		for (int i = 0; i < n; ++i) {
			if (flag) ans.push_front(a[i].second);
			else ans.push_back(a[i].second);
			flag = !flag;
		}
		cout << "0 ";
		for (auto x: ans) {
			cout << x << ' ';
		}
		cout << endl;
    }
	return 0;
}

