#include <bits/stdc++.h>

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

using namespace std;
using ll = long long;

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	while (tc--) {
        ll a, s;
        cin >> a >> s;
        vector<int>b;
        bool flag = true;
        while(s && flag){
            int x = a % 10;
            int y = s % 10;
            if(x <= y) b.emplace_back(y - x);
            else{
                s /= 10;
                y += 10 * (s % 10);
                if(x < y && y >= 10 && y <= 19) b.emplace_back(y - x);
                else{
                    flag = false;
                    break;
                }
            }
            a /= 10;
            s /= 10;
        }
        if (a) flag = false;
        if (flag) {
            while (b.back() == 0) b.pop_back();
            for(int i = (int)b.size() - 1; i >= 0; i--) cout << b[i];
            cout << endl;
        } else cout << -1 << endl;
    }
	return 0;
}

