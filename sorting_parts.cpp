#include <bits/stdc++.h>

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

using namespace std;
using ll = long long;

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	while (tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
		if(!is_sorted(a.begin(), a.end()))
			cout << "YES\n";
		else cout << "NO\n";
    }
	return 0;
}

