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
		string s;
		cin >> s;
		int i = 0;
		int dig = s[i] - '0';
		if (dig != 9 && dig > 4) s[i] = char('0' + 9 - dig);
		++i;
		int n = s.length();
		for (; i < n; ++i) {
			dig = s[i] - '0';
			if (dig > 4) s[i] = char('0' + 9 - dig);
		}
		cout << s << endl;
    }
	return 0;
}

