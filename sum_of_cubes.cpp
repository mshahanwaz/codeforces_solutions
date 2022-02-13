#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

const ll N = 1'000'000'000'000L;
unordered_set<ll> cubes;

void pre_compute() {
	for (ll i = 1; i * i * i <= N; ++i) {
		cubes.insert(i * i * i);
	}
}

int main() {
    fastIO();
	pre_compute();
	int tc = 1;
    cin >> tc;
	while (tc--) {
		ll x; cin >> x;
		bool exist = false;
		for (ll i = 1; i * i * i <= x; ++i) {
			if (cubes.count(x - i * i * i)) {
				exist = true;
				break;
			}
		}
		cout << (exist ? "YES" : "NO") << endl;
    }
	return 0;
}

