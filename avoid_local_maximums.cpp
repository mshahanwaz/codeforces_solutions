#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	ll tc = 1;
    cin >> tc;
	while (tc--) {
		ll n; 
		cin >> n;
		vector<ll> a(n);
		for (ll &x: a)
			cin >> x;
		ll ans = 0;
		if (n < 3) ans = 0;
		else {
			ll l = 1, r = n - 2;
			while (l < r) {
				ll next = l + 2;
				if (a[l] > a[l + 1] && a[l] > a[l - 1]) {
					a[next - 1] = max(a[l], a[next]);
					++ans;
					l = next;
				} else ++l;
				next = r - 2;
				if (a[r] > a[r - 1] && a[r] > a[r + 1]) {
					a[next + 1] = max(a[next], a[r]);
					++ans;
					r = next;
				} else --r;
			}
			if (l == r && a[l] > a[l + 1] && a[l] > a[l - 1]) {
				++ans;
				a[l] = a[l - 1];
			}
		}
		cout << ans << endl;
		for (ll x: a) 
			cout << x << ' ';
		cout << endl;
    }
	return 0;
}

