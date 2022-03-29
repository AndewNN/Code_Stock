/*
algo : Combination
*/
#include<bits/stdc++.h>
using namespace std;
int a[20], st = 2, n = 10, qs[1010], ans[2], now[5];
void play(int l, int state) {
    if (state == st) {
        now[0] = qs[a[0]];
        now[1] = qs[]
            printf("\n");
        return;
    }
    for (int i = l + 1;i < n;i++) {
        a[state] = i;
        play(i, state + 1);
    }
    return;
}
int main() {
    int i, q;
    scanf("%d", &q);
    for (i = 1;i <= n;i++) {
        scanf("%d", &qs[i]);
        qs[i] += qs[i - 1];
    }
    play(0, 0);

}