#include <bits/stdc++.h>
using namespace std;

const int N = 3005;

void solve() {
	int n; cin >> n;
	// vector<int> prime;
	// vector<bool> is_prime(N + 1, true);
	// is_prime[0] = is_prime[1] = false;
	// for(int i = 2; i <= N; i++) {
	// 	if(is_prime[i]) {
	// 		prime.push_back(i);
	// 		for (int j = i * i; j <= N; j += i) {
	// 			is_prime[j] = false;
	// 		}
	// 	}
	// }
	// int res = 0;
	// for (int p = 6; p <= n; p++) {
	// 	int cnt = 0;
	// 	for (int i = 0; prime[i] <= p; i++) {
	// 		if(p % prime[i] == 0) {
	// 			cnt++;
	// 			int tmp = p;
	// 			while(tmp % prime[i] == 0) tmp /= prime[i];
	// 		}
	// 	}
	// 	if(cnt == 2) res++;
	// }
	// cout << res << endl;
	vector<bool> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;
	vector<int> factor(n + 1);
	int res = 0;
	for (int i = 2; i <= n; i++) {
		if(is_prime[i]) {
			for (int j = 2 * i; j <= n; j += i) {
				++factor[j];	
				is_prime[j] = false;
			}
		}
		if(factor[i] == 2) 
			res++;
	}
	cout << res << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; // cin >> tc;
	while(tc--) solve();
	return 0;
}

