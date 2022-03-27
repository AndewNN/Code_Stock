#include<bits/stdc++.h>
using namespace std;
int a[5], s[5], ans;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int i, j, o, n, l;
    cin >> n;
    for (i = 0;i < n;i++)
        for (j = 0;j < 5;j++)
            cin >> o, a[j] += o;
    ans += a[0] + a[1] + (a[2] + 1) / 2;
    s[3] += a[1] + (a[2] % 2) * 2;
    if (a[3] > s[3])
        ans += (a[3] - s[3] + 3) / 4, s[3] += ((a[3] - s[3] + 3) / 4) * 4;
    s[3] -= a[3], s[4] += s[3] * 2;
    if (a[4] > s[4])
        ans += (a[4] - s[4] + 7) / 8;
    cout << ans;
}