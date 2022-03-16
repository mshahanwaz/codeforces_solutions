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
		int cnt = (n + 3) / 4;
		for (int i = 0; i < n - cnt; ++i) {
			cout << 9;
		}
		for (int i = 0; i < cnt; ++i) {
			cout << 8;
		}
		cout << endl;
	}
	return 0;
}
