#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> ump;
int a[20][20], si, n, ans, di[4] = { -1,0,1,0 }, dj[4] = { 0,1,0,-1 }, mk[20][20];
void play(int i, int j, int dir) {
    ump[dir] = 1;
    si += 1;
    //cout << i << " " << j << "\n";
    for (int k = 0;k < 4;k++) {
        int ii = i + di[k], jj = j + dj[k];
        if (ii < 0 || jj < 0 || ii >= n || jj >= n)    continue;
        if (a[ii][jj] != a[i][j] || mk[ii][jj]) continue;
        mk[ii][jj] = 1;
        play(ii, jj, k);
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int i, j;
    cin >> n;
    for (i = 0;i < n;i++)
        for (j = 0;j < n;j++)
            cin >> a[i][j];
    for (i = 0;i < n;i++)
        for (j = 0;j < n;j++) {
            if (a[i][j] != 0) {
                si = 0;
                mk[i][j] = 1;
                play(i, j, 10);
                //cout << "out " << si << " " << ump.size() << "\n";
                if (si == 3 && ump.size() == 3)
                    ans++;
                ump.clear();
            }
        }
    cout << ans;
}
/*

3
1 1 0
1 2 2
3 2 2

*/