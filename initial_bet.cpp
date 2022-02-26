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
		vector<int> c(5);
		int sum = 0;
		for (int &x: c)
			cin >> x, sum += x;
		int ans = sum / 5;
		if (!sum || sum % 5) ans = -1;
		cout << ans << endl;
    }
	return 0;
}

