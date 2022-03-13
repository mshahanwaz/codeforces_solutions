#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
    fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		bool isDec = false;
		for (int i = 1; !isDec && i < n; ++i) {
			if (s[i - 1] > s[i]) isDec = true;
		}
		string ans = "";
		if (!isDec) ans = s;
		else {
			for (int i = 0; i < n; ++i) {
				if (s[i] == '1') break;
				ans += '0';
			}
			ans += '0';
			for (int i = n - 1; i >= 0; --i) {
				if (s[i] == '0') break;
				ans += '1';
			}
		}
		cout << ans << endl;
	}
    return 0;
}
