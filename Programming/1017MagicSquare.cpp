#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> mp;
int a[15][15];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int i, j, n, ch = 1, s, sum = 0;
    cin >> n;
    s = n * (n * n + 1) / 2;
    for (i = 0;i < n;i++)
        for (j = 0;j < n;j++) {
            cin >> a[i][j];
            if (mp[a[i][j]])
                ch = 0;
            mp[a[i][j]] = 1;
        }
    for (i = 0;i < n;i++, sum = 0) {
        for (j = 0;j < n;j++)
            sum += a[i][j];
        if (sum != s)  ch = 0;
    }
    for (j = 0;j < n;j++, sum = 0) {
        for (i = 0;i < n;i++)
            sum += a[i][j];
        if (sum != s)  ch = 0;
    }
    for (i = 0, sum = 0, j = 0;i < n;i++, j++)
        sum += a[i][j];
    if (sum != s)  ch = 0;
    for (i = 0, sum = 0, j = n - 1;i < n;i++, j--)
        sum += a[i][j];
    if (sum != s)  ch = 0;
    cout << (ch ? "Yes" : "No");
}
/*

4
16 2 3 13
5 11 10 8
9 7 6 12
4 14 15 1

*/