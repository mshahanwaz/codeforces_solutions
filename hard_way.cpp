#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

struct Point {
	int x, y;
	Point() { x = y = 0; }
	Point(int _x, int _y) : x(_x), y(_y) {}
};

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	cout << setprecision(9) << fixed;
	while (tc--) {
		Point t[3];
		for (auto &each: t) {
			cin >> each.x >> each.y;
		}
		double ans = 0.0;
		if (t[0].y == t[1].y && t[2].y < t[0].y) ans = fabs(t[0].x - t[1].x);
		else if (t[0].y == t[2].y && t[1].y < t[0].y) ans = fabs(t[0].x - t[2].x);
		else if (t[1].y == t[2].y && t[0].y < t[1].y) ans = fabs(t[1].x - t[2].x);
		cout << ans << endl;
    }
	return 0;
}

