#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int TC = 1;
    // cin >> TC;
	while (TC--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int &x: a)
			cin >> x;
		int cnt25 = 0, cnt50 = 0;
		bool flag = true;
		for (int i = 0; flag && i < n; ++i) {
			if (a[i] == 25) ++cnt25;
			else if (a[i] == 50) {
				if (cnt25) --cnt25;
				else flag = false;
				++cnt50;
			} else {
				if (cnt25 && cnt50)
					--cnt25, --cnt50;
				else if (cnt25 > 2) 
					cnt25 -= 3;
				else flag = false;
			}
		}
		cout << (flag ? "YES" : "NO") << endl;
    }
	return 0;
}
