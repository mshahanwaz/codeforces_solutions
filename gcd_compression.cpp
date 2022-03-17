#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)
#define sz(x) (int)x.size()

int main() {
    fastIO;
    int TC = 1;
    cin >> TC;
    while (TC--) {
        int n;
        cin >> n;
        vector<int> even, odd, a(2 * n + 5);
        for (int i = 1; i <= 2 * n; ++i) {
            cin >> a[i];
            if (a[i] & 1)
                odd.push_back(i);
            else
                even.push_back(i);
        }
        vector<pair<int, int>> ans;
        for (int i = 0; i + 1 < sz(odd); i += 2) {
            ans.push_back({ odd[i], odd[i + 1] });
        }
        for (int i = 0; i + 1 < even.size(); i += 2) {
            ans.push_back({ even[i], even[i + 1] });
        }
        for (int i = 0; i < n - 1; ++i) {
            cout << ans[i].first << ' ' << ans[i].second << endl;
        }
    }
    return 0;
}
