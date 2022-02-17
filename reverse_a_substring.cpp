#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int tc = 1;
    // cin >> tc;
	while (tc--) {
   		int n;
		cin >> n;
		string s;
		cin >> s;
		if (is_sorted(s.begin(), s.end())) {
			cout << "NO" << endl;
			continue;
		}
		vector<int> a(26);
		for (char x: s) {
			++a[x - 'a'];
		}
		bool flag = false;
		int i = 0, j;
		for (; i < (int)s.length(); ++i) {
			for (j = 0; j < s[i] - 'a'; ++j) {
				if (a[j]) {
					flag = true;
					break;
				}
			}
			if (flag) break;
			--a[s[i] - 'a'];
		}
		if (flag) {
			int p = ++i;
			for (; p < n; ++p) {
				if (s[p] - 'a' == j) {
					break;
				}
			}
			cout << "YES" << endl;
			j = ++p;
			cout << i << ' ' << j << endl;
		} else cout << "NO" << endl;
    }
	return 0;
}

