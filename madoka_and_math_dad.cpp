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
		if (n % 3 == 0) {
			for (int i = 0; i < n / 3; ++i) {
				cout << 21;
			}
			cout << endl;
			continue;
		}
		pair<int, int> tmp = { n + 1, n - 2 };
		if (tmp.first % 3 != 0 || tmp.second % 3 != 0) {
			tmp = { n - 1, n + 2 };
		}
		bool flag = false;
		int x = tmp.first, y = tmp.second;
		x /= 3, y /= 3;
		if (x > y) flag = true;
		while (x && y) {
			if (flag) {
				if (x) cout << 2;
				if (y) cout << 1;
			} else {
				if (y) cout << 1;
				if (x) cout << 2;
			}
			--x, --y;
		}
		if (x) cout << 2;
		if (y) cout << 1;
		cout << endl;
	}
    return 0;
}
