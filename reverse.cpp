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
		int n;
		cin >> n;
		vector<int> p(n);
		for (auto &x: p)
			cin >> x;
		int L = 0;
		for (int i = 0; i < n; ++i) {
			if (p[i] == i + 1) continue;
			L = i + 1;
			break;	
		}
		int R = L;
		for (int i = L; i < n; ++i) {
			if (p[i] != L) continue;
			R = i + 1;
			break;
		}
		while (L < R) {
			swap(p[L - 1], p[R - 1]);
			L++; R--;
		}
		for (int i = 0; i < n; ++i) 
			cout << p[i] << ' ';
		cout << endl;
    }
	return 0;
}

