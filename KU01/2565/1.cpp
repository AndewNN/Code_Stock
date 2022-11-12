#include <bits/stdc++.h>
using namespace std;
int a[100], b[100], ans[100], n, t;
void solve1() {
    a[0] = n;
    for (int i = 1; i <= n; i++)
        ans[i] = (a[i - 1] > a[i] ? 0 : 1);
}
void solve2() {
    a[1] = b[1];
    for (int i = 2; i <= n; i++) {
        a[i] = b[i] - a[i - 1];
        if (abs(a[i] - a[i - 1]) > 1) a[i] -= a[i - 1];
    }
}
int main() {
    int i;
    cin >> n >> t;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    if (t == 1) {
        solve1();
        for (i = 1; i <= n; i++)
            cout << ans[i] << " ";
    }
    if (t == 2) {
        for (i = 1; i <= n; i++)
            b[i] = a[i];
        solve2();
        solve1();
        for (i = 1; i <= n; i++)
            cout << ans[i] << " ";
    }
}
