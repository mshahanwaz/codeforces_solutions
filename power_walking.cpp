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
		vector<int> a(n);
		for (int &x: a)
			cin >> x;
		vector<pair<int, int>> aux;
		sort(a.begin(), a.end());
		for (int i = 0; i < n; ++i) {
			int cnt = 0, j = i;
			while (j < n && a[j] == a[i]) ++cnt, ++j;
			aux.emplace_back(a[i], cnt);
			i = j - 1;
		}
		sort(aux.begin(), aux.end(), [&](auto p, auto q) {
			if (p.second < q.second)
				return (p.second < q.second);
			return (p.first < p.first);
		});
		int m = (int)aux.size();
		vector<int> res;
		res.push_back(m);
		int prev = m, i = 0;
		int last = 0;
		while (i < m) {
			if (aux[i].second == 1) {
				if (last == aux[i].first) 
					++prev;
				++i;
			} else {
				--aux[i].second;
				if (!last || last == aux[i].first) ++prev;
				last = aux[i].first;
			}
			if (i < m) res.push_back(prev);
		}
		for (int x: res)
			cout << x << ' ';
		cout << endl;
	}
	return 0;
}

