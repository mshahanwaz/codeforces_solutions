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
		for (int &x: a)
			cin >> x;
		bool is_possible = false;
		bool is_even = false;
		ll ans = 0;
		for (int i = 1; i < n - 1; ++i) {
			if (a[i] != 1) is_possible = true;
			if (a[i] % 2 == 0) is_even = true;
			ans += (a[i] + 1) / 2;
		}
		if (is_possible && n == 3 && !is_even) 
			is_possible = false;
		cout << (is_possible ? ans : -1ll) << endl;
    }
	return 0;
}

