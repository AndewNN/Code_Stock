#include <bits/stdc++.h>
using namespace std;
struct A {
    int x, y, d;
};
int n, m, ni, nd, di[4] = {-1, 0, 1, 0}, dj[4] = {0, 1, 0, -1}, mk[2020][2020];
char a[2020][2020];
queue<pair<int, int>> all;
queue<A> q;
int main() {
    int i, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            scanf(" %c", &a[i][j]);
            if (a[i][j] == 'A') {
                all.push({i, j});
            }
        }
    while (!all.empty()) {
        int xx = all.front().first, yy = all.front().second;
        all.pop();
        q.push({xx, yy, 0});
        while (!q.empty()) {
            int x = q.front().x, y = q.front().y, d = q.front().d;
            q.pop();
            if (a[x][y] == 'X') {
                ni++, nd += d * 2;
                memset(mk, 0, sizeof mk);
                while (!q.empty())
                    q.pop();
                break;
            }
            for (int k = 0; k < 4; k++) {
                int ii = x + di[k], jj = y + dj[k];
                if (ii < 0 || jj < 0 || ii >= n || jj >= m) continue;
                if (mk[ii][jj]) continue;
                if (a[ii][jj] == 'W') continue;
                mk[ii][jj] = 1;
                q.push({ii, jj, d + 1});
            }
        }
    }
    printf("%d %d\n", ni, nd);
}
/*

5 5
EEEEE
AEAEW
WEEWW
WEEXE
WWEXA

*/