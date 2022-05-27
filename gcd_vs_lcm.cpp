#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)
#define sz(x) (int)x.size()

int main() {
	fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int n;
		cin >> n;
		cout << n - 3 << ' ';
		for (int i = 0; i < 3; ++i)
			cout << 1 << ' ';
		cout << endl;
	}
	return 0;
}
