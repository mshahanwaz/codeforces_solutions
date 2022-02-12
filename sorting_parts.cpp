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
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        int sum = 0;
        bool flag = false;
        for (int i = 0; i < n - 1; ++i) {
            sum += a[i].second;
            if (sum == i * (i + 1) / 2) {
                flag = true;
                break;
            }
        }
        cout << (!flag ? "YES" : "NO") << endl;
    }
	return 0;
}

