#include <bits/stdc++.h>
using namespace std;
int p[1010], n;
map<int, int> mp;
int fp(int i) {
    if (p[i] == i)
        return i;
    return p[i] = fp(p[i]);
}
int main() {
    int i, m, a, b;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++)
        p[i] = i;
    while (m--) {
        scanf("%d %d", &a, &b);
        p[a] = fp(p[b]);
    }
    for (i = 1; i <= n; i++)
        mp[fp(p[i])]++;
    printf("%d", mp.size());
}
/*

5 3
2 1
1 3
4 5

*/