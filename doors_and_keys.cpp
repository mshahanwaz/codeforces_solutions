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
		string s;
		cin >> s;
		bool r = 0, g = 0, b = 0;
		bool flag = true;
		for (int i = 0; flag && i < 6; ++i) {
			if (s[i] >= 'a' && s[i] <= 'z') {
				if (s[i] == 'r' && !r) r = 1;
				else if (s[i] == 'b' && !b) b = 1;
				else if (s[i] == 'g' && !g) g = 1;
				else flag = false;
			} else {
				if (s[i] == 'R' && !r) flag = false;
				else if (s[i] == 'G' && !g) flag = false;
				else if (s[i] == 'B' && !b) flag = false;
			}
		}
		cout << (flag ? "YES" : "NO") << endl;
    }
	return 0;
}

