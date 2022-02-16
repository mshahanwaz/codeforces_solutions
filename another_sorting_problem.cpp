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
   		int n, m;
		cin >> n >> m;
		vector<pair<string, int>> s(n);
		for (int i = 0; i < n; ++i) {
			string str;
			cin >> str;
			for (int j = 1; j < m; j += 2) {
				str[j] = 'A' + 'Z' - str[j];
			}
			s[i] = {str, i + 1};
		}
		sort(s.begin(), s.end());
		for (auto x: s) 
			cout << x.second << ' ';
		cout << endl;
    }
	return 0;
}

