#include <bits/stdc++.h>
using namespace std;
vector<int> v[220];
int a[500][500], n, m, ii = 250, jj = 250, si, sj;
char opr[220][220];
pair<int, int> p[40040];
void dfs(int x, int xx) {
    for (auto k : v[x]) {
        if (k == xx)
            continue;
        char oo = opr[x][k];
        if (oo != '0') {
            if (oo == 'U') {
                p[k] = make_pair(p[x].first + 1, p[x].second);
                dfs(k, x);
            } else if (oo == 'L') {
                p[k] = make_pair(p[x].first, p[x].second + 1);
                dfs(k, x);
            }
        } else {
            oo = opr[k][x];
            if (oo == 'U') {
                p[k] = make_pair(p[x].first - 1, p[x].second);
                dfs(k, x);
            } else if (oo == 'L') {
                p[k] = make_pair(p[x].first, p[x].second - 1);
                dfs(k, x);
            }
        }
    }
    return;
}
int main() {
    int i, j, x, y;
    char o;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n * m - 1; i++) {
        scanf("%d %c %d", &x, &o, &y);
        v[x].push_back(y);
        v[y].push_back(x);
        opr[x][y] = o;
        opr[y][x] = '0';
    }
    p[0] = make_pair(250, 250);
    dfs(0, -1);
    memset(a, -1, sizeof a);
    for (i = 0; i < m * n; i++) {
        a[p[i].first][p[i].second] = i;
    }
    int ch = 1;
    for (i = 0; i < 500; i++) {
        for (j = 0; j < 500; j++)
            if (a[i][j] != -1) {
                si = i, sj = j;
                ch = 0;
                break;
            }
        if (!ch) break;
    }
    for (i = si; i < si + n; i++) {
        for (j = sj; j < sj + m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    // for (i = 0; i < n * m; i++)
    //     printf("%d %d %d\n", i, p[i].first, p[i].second);
}
/*

3 2
1 U 5
0 U 3
4 L 2
0 L 1
5 U 2

*/