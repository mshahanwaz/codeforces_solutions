#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
	fastIO;
	int TC = 1;
	// cin >> TC;
	while (TC--) {
		string a, b;
		cin >> a >> b;
		if (a == b) cout << -1;
		else cout << max(a.length(), b.length()) << endl;
	}
	return 0;
}
