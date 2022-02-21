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
		int pos = n - 1;
		while (pos > 0 && a[pos - 1] >= a[pos]) --pos;
		while (pos > 0 && a[pos - 1] <= a[pos]) --pos;
		cout << pos << endl;
    }
	return 0;
}

