#include <bits/stdc++.h>
using namespace std;

int main() {
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int &x: a) {
			cin >> x;
		}
		int k = 0;
		while (k < n && a[k] == 1) {
			++k;
		}
		cout << ((k == n) ^ (k & 1) ? "Second" : "First") << endl;
	}
}
