#include<bits/stdc++.h>
using namespace std;
struct A
{
    int i, w;
    bool operator < (const A& o)const {
        return i > o.i;
    }
};
priority_queue<A> hp;
unordered_map<int, int> mp;
int a[300], ans[2];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int l, h, i, n, st, ll, now = 0, li = 0, lw = 0;
    cin >> l >> h >> n;
    hp.push({ 0,0 }), hp.push({ l - 1,0 });
    mp[0] = mp[l - 1] = 1;
    for (i = 0;i < n;i++) {
        cin >> st >> ll;
        hp.push({ st,1 }), hp.push({ st + ll,-1 });
        mp[st] = 1, mp[st + ll] = 1;
    }
    i = 0;
    for (auto x : mp) {
        a[i++] = x.first;
    }
    sort(a, a + mp.size());
    for (i = 0;i < mp.size();i++) {
        if (a[i] >= l)break;
        while (!hp.empty() && a[i] == hp.top().i) {
            now += hp.top().w;
            hp.pop();
        }
        if (lw < 2)
            ans[lw] += (a[i] - li) * h;
        li = a[i], lw = now;
        if (li == l - 1 && lw < 2)
            ans[lw] += h;
    }
    cout << ans[0] << " " << ans[1];

}
/*

13 3 3
1 4
10 3
3 5

0 1 1 2 2 1 1 1 0 0 1 1 1

7 3 3
1 2
5 1
2 2

0 1 2 1 0 1 1

*/