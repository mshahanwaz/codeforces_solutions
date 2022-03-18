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
		int n, m;
		cin >> n >> m;
		bool turn = true;
		for (int i = 0; i < n; ++i) {
			string row;
			cin >> row;
			for (int j = 0; j < m; ++j) {
				if (row[j] == '.')
					cout << (turn ? "B" : "W");
				else cout << row[j];
				turn = !turn;
			}
			if (m % 2 == 0) turn = !turn;
			cout << endl;
		} 
	}
	return 0;
}
