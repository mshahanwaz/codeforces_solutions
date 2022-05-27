// 27-05-22 23:04
// https://codeforces.com/problemset/problem/1684/B

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int, int>;
using mi = map<int, int>;
using vpi = vector<pi>;

#define endl '\n'
#define TEZ cin.tie(0)->sync_with_stdio(0)
#define eb emplace_back
#define pb push_back
#define ins insert
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define uniq(x) (x).resize(unique(all(x)) - (x).begin())
#define mt make_tuple
#define rep(i, x, y) for (__typeof(y) i = (x) - ((x) > (y)); i != (y) - ((x) > (y)); i += 1 - 2 * ((x) > (y)))
#define what(x) cerr << #x << " is " << x << endl
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}

const ll MOD = 1e9 + 7;

template <typename T, typename U> static inline void amax(T &x, U y) { if (x < y) x = y; }
template <typename T, typename U> static inline void amin(T &x, U y) { if (y < x) x = y; }

int main() {
	TEZ;

	int TC = 1;
	cin >> TC;
	while (TC--) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << a + b + c << ' ' << b + c << ' ' << c << endl;
	}
	return 0;
}
