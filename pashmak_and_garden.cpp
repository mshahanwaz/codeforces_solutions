#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
using pi = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vpi = vector<pi>;
using vb = vector<bool>;

#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define eb emplace_back
#define ins insert
#define mp make_pair
#define mt make_tuple
#define rev reverse
#define precise(x) cout << fixed << setprecision(x)
#define accum(x, y) accumulate(all(x), y)
#define rep(x) for(int i = 0; i < x; i++)
#define rep2(x, y) for(int i = x; i < y; i++)
#define rep3(x, y, z) for(int i = x; j < y; i += z)
#define per(x) for(int i = x; i >= 0; i--)
#define per2(x, y) for(int i = x; i >= y; i--)
#define per3(x, y, z) for(int i = x; i >= y; i -= z)
#define repa(x, y) for(auto x : y)
#define repr(x, y) for(auto &x : y)
#define krep(i, x) for(int i = 0; i < x; i++)
#define krep2(i, x, y) for(int i = x; i < y; i++)
#define krep3(i, x, y, z) for(int i = x; i < y; i += z)
#define debug(x) cout << #x << " = " << x << endl
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)x.size()
#define len(x) (int)x.length()

const int dr4[] = {0, 1, 0, -1};
const int dc4[] = {1, 0, -1, 0};

const int dr8[] = {0, 1, 0, -1, 1, -1, -1, 1};
const int dc8[] = {1, 0, -1, 0, -1, -1, 1, 1};

void setIO(str name = "") {
	cin.tie(0) -> sync_with_stdio(0);
	if(sz(name)) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

template<typename T>
bool ckmax(T &a, T b) { return b > a ? a = b, 1 : 0; };
template<typename T>
bool ckmin(T &a, T b) { return b < a ? a = b, 1 : 0; };

/* Main Code */

void solve() {
	int x[2], y[2];
	rep(2) cin >> x[i] >> y[i];
	int xdif = abs(x[0] - x[1]);
	int ydif = abs(y[0] - y[1]);
	vpi ans;
	if(xdif == 0) 
		rep(2) ans.eb(x[i] + ydif, y[i]);
	else if(ydif == 0)
		rep(2) ans.eb(x[i], y[i] + xdif);
	else if(xdif == ydif)
		ans.eb(x[0], y[1]), ans.eb(x[1], y[0]);
	else {
		cout << -1 << endl;
		return;
	}
	rep(2) cout << ans[i].fi << ' ' << ans[i].se << ' ';
}

int main() {
	setIO();
	int tc = 1; // cin >> tc;
	while(tc--) solve();
	return 0;
}

