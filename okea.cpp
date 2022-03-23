#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int n, k;
		cin >> n >> k;
		if (k == 1) {
			puts("YES");
			for (int i = 1; i <= n; ++i)
				cout << i << endl;
		} else if (n % 2)
			puts("NO");
		else {
			puts("YES");
			for (int i = 0; i < n; ++i)
				for (int j = 0; j < k; ++j)
					cout << j * n + i + 1 << " \n"[j == k - 1];
		}
	}
	return 0;
}
