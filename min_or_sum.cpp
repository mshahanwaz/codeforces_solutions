#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int ans = 0;
		for (int &x: a) {
			cin >> x;
			ans |= x;
		}
		cout << ans << endl;
    }
	return 0;
}

