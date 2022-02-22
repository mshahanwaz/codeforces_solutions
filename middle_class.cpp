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
        ll n, x;
		cin >> n >> x;
		vector<ll> a(n);
		for (ll &x: a)
			cin >> x;
		ll sum = 0;
		sort(a.begin(), a.end());
		ll i = n - 1;
		for (;i >= 0; --i) {
			sum += a[i];
			if (sum / (n - i) < x)
				break;
		}
		cout << n - i - 1 << endl;
    }
	return 0;
}

