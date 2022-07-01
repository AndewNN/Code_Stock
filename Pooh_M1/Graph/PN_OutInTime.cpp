#include <bits/stdc++.h>
using namespace std;
queue<pair<int, int>> que;
int r, c, t, q, d, dis[35][35], di[4] = {-1, 0, 1, 0}, dj[4] = {0, -1, 0, 1}, cou;
char a[35][35];
int main() {
    int i, j, si, sj, ei, ej;
    scanf("%d", &q);
    while (q--) {
        scanf("%d %d %d", &r, &c, &t);
        memset(dis, -1, sizeof dis);
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                scanf(" %c", &a[i][j]);
        scanf("%d %d %d %d", &si, &sj, &ei, &ej);
        si--, sj--, ei--, ej--;
        que.push({si, sj});
        d = -1, cou = 1;
        dis[si][sj] = 0;
        while (!que.empty()) {
            i = que.front().first;
            j = que.front().second;
            que.pop();
            for (int k = 0; k < 4; k++) {
                int ii = i + di[k], jj = j + dj[k];
                if (ii < 0 || jj < 0 || ii >= r || jj >= c)
                    continue;
                if (a[ii][jj] == '#' || dis[ii][jj] != -1)
                    continue;
                dis[ii][jj] = dis[i][j] + 1;
                cou++;
                que.push({ii, jj});
                if (ii == ei && jj == ej)
                    d = dis[ii][jj];
            }
        }
        if (d > t || d == -1)
            printf("-1\n");
        else {
            printf("%d\n", d + 1 + min((t - d) / 2, cou - (d + 1)));
        }
    }
}
/*

3
5 8 9
#..#..#.
.#...##.
##.##..#
...##.##
##.#..##
4 3 2 4
4 5 100
.....
.####
...#.
#.##.
3 3 1 3
3 5 2
.....
.####
.....
3 3 1 3

*/