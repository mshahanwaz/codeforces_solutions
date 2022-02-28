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
		sort(a.begin(), a.end());
		bool flag = false;
		for (int i = 1; !flag && i < n - 1; ++i) 
			if (a[i - 1] + a[i] > a[i + 1])
				flag = true;
		cout << (flag ? "YES" : "NO") << endl;
    }
	return 0;
}

