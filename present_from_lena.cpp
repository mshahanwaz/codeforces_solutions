#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
    fastIO;
    int TC = 1;
    // cin >> TC;
    while (TC--) {
        int n;
        cin >> n;
        int levels = 0;
        while (levels < n) {
            for (int i = 0; i < 2 * (n - levels); ++i) {
                cout << " ";
            }
            for (int i = 0; i <= levels; ++i) {
                cout << i << ' ';
            }
            for (int i = levels - 1; i >= 0; --i) {
                cout << i << ' ';
            }
            cout << endl;
            ++levels;
        }
        levels = n;
        while (levels >= 0) {
            for (int i = 0; i < 2 * (n - levels); ++i) {
                cout << " ";
            }
            for (int i = 0; i <= levels; ++i) {
                cout << i << ' ';
            }
            for (int i = levels - 1; i >= 0; --i) {
                cout << i << ' ';
            }
            cout << endl;
            --levels;
        }
    }
    return 0;
}
