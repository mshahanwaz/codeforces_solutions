#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)


bool check(int r, int g, int b, int w) {
	int chk = r % 2 + g % 2 + b % 2 + w % 2;
	return (chk > 1);
}

int main() {
	fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int r, b, g, w;
		cin >> r >> b >> g >> w;
		if (!check(r, g, b, w)) puts("Yes");
		else if (r > 0 && g > 0 && b > 0 && !check(r - 1, g - 1, b - 1, w + 1))
			puts("Yes");
		else puts("No");
	}
	return 0;
}
