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
        int n, m;
		cin >> n >> m;
		cout << 'W';
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
				if (i + j)
					cout << 'B';
			cout << endl;
		}
    }
	return 0;
}

