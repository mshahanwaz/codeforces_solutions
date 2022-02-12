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
        const int N = 150001;
        vector<int> last_pos(N);
        for (int i = 0; i < N; ++i) {
            last_pos[i] = -1;
        }
        int ans = -1;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (last_pos[x] != -1) {
                int left = last_pos[x];
                int right = n - i - 1;
                ans = max(left + right + 1, ans);
            }
            last_pos[x] = i;
        }
        cout << ans << endl; 
    }
	return 0;
}

