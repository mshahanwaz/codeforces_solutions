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
 		ll n;
		cin >> n;
		vector<ll> a(n);
		for (int &x: a) 
			cin >> x;
		if (is_sorted(a.begin(), a.end()) {
			cout << "YES" << endl;
			break;
		}
		vector<ll> b(a.begin(), a.end());
		sort(b.begin(), b.end());
		
    }
	return 0;
}

