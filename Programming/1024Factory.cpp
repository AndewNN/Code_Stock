/*
algo : Combination
*/
#include<bits/stdc++.h>
using namespace std;
int a[5], n, qs[1010], ans[2], now[5], mi = 1e9;
void play(int l, int state) {
    if (state == 2) {
        now[0] = qs[a[0]];
        now[1] = qs[a[1]] - qs[a[0]];
        now[2] = qs[n] - qs[a[1]];
        sort(now, now + 3);
        if (now[2] - now[0] < mi)
            mi = now[2] - now[0], ans[0] = a[0] + 1, ans[1] = a[1] + 1;
        return;
    }
    for (int i = l + 1;i < n;i++) {
        a[state] = i;
        play(i, state + 1);
    }
    return;
}
int main() {
    int i;
    scanf("%d", &n);
    for (i = 1;i <= n;i++) {
        scanf("%d", &qs[i]);
        qs[i] += qs[i - 1];
    }
    play(0, 0);
    printf("%d %d", ans[0], ans[1]);
}