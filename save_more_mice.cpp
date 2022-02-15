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
   		int n, k;
		cin >> n >> k;
		vector<int> a(k);
		for (int &x: a) 
			cin >> x;
		sort(a.rbegin(), a.rend());
		int cnt = 0;
		ll sum = 0;
		while (cnt < (int)a.size() && sum + n - a[cnt] < n) 
			sum += n - a[cnt++];
		cout << cnt << endl;
    }
	return 0;
}

