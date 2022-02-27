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
		bool flag = true;
		if (n % 2 == 1 || s[0] == ')' || s[n - 1] == '(')
			flag = false;
		cout << (flag ? "YES" : "NO") << endl;
    }
	return 0;
}

