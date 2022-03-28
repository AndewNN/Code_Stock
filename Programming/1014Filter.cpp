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
int a[300];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int l, h, i, n, st, ll;
    cin >> l >> h >> n;
    for (i = 0;i < n;i++) {
        cin >> st >> ll;
        hp.push({ st,1 });
        hp.push({ st + ll,-1 });
        mp[st] = 1;
        mp[st + ll] = 1;
    }
    for


}