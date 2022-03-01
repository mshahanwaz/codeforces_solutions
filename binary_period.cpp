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
		set<char> st;
		for (char c: s)
			st.insert(c);
		string res = "";
		bool flag = true;
		int n = (int)st.size();
		if (n == 1) {
			cout << s << endl;
			continue;
		}
		for (int i = 0; i < 2 * (int)s.length(); ++i) {
			res += (flag ? "1" : "0");
			flag = !flag;
		}
		cout << res << endl;
    }
	return 0;
}

