#include <bits/stdc++.h>
using namespace std;
double a[6][6], ans = 1e9;
int mk[6][6], m, n, di[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, dj[8] = {0, 1, 1, 1, 0, -1, -1, -1};
void play(int state, int x, int y, double sum) {
    if (state == m * n - 1) {
        ans = min(ans, sum);
        return;
    }
    for (int k = 0; k < 8; k++) {
        int ii = x + di[k], jj = y + dj[k];
        a[ii][jj] += a[x][y] / 10;
    }
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
            if (mk[i][j]) continue;
            mk[i][j] = 1;
            play(state + 1, i, j, sum + a[i][j]);
            mk[i][j] = 0;
        }
    for (int k = 0; k < 8; k++) {
        int ii = x + di[k], jj = y + dj[k];
        a[ii][jj] -= a[x][y] / 10;
    }
}
int main() {
    int i, j;
    scanf("%d %d", &m, &n);
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            scanf("%lf", &a[i][j]);
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++) {
            mk[i][j] = 1;
            play(0, i, j, a[i][j]);
            mk[i][j] = 0;
        }
    printf("%.2lf", ans);
}