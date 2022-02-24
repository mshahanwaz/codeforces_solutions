#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int TC = 1;
    cin >> TC;
	while (TC--) {
		string s;
		cin >> s;
		int n = (int)s.length();
		vector<int> aux;
		aux.push_back(0);
		for (int i = 0; i < n; ++i) {
			if (s[i] == 'R') 
				aux.push_back(i + 1);
		}
		aux.push_back(n + 1);
		int ans = 0, m = (int)aux.size();
		for (int i = 0; i < m - 1; ++i) {
			ans = max(ans, aux[i + 1] - aux[i]);
		}
		cout << ans << endl;
    }
	return 0;
}

