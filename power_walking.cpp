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
		set<int> aux;
		for (int &x: a) {
			cin >> x;
			aux.insert(x);
		}
		int cnt = (int)aux.size();
		for (int k = 1; k <= n; ++k)
			cout << max(k, cnt) << ' ';
		cout << endl;
	}
	return 0;
}

