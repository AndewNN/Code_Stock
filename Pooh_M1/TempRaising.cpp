#include <bits/stdc++.h>
using namespace std;
int a[30][30], ma = -1e9, di[4] = {-1, 0, 1, 0}, dj[4] = {0, 1, 0, -1};
struct A
{
    int i, j, last;
};
queue<A> q;
A t;
int main()
{
    int i, j, n, x, y;
    scanf("%d %d %d", &n, &y, &x);
    x--, y--;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    q.push({x, y, a[x][y]});
    while (!q.empty())
    {
        t = q.front();
        q.pop();
        ma = max(ma, t.last);
        for (int k = 0; k < 4; k++)
        {
            int ii = t.i + di[k], jj = t.j + dj[k];
            if (ii < 0 || jj < 0 || ii >= n || jj >= n)
                continue;
            if (a[ii][jj] == 100 || a[ii][jj] <= t.last)
                continue;
            q.push({ii, jj, a[ii][jj]});
        }
    }
    printf("%d\n", ma);
}
/*

4
2 1
100 1 3 8
0 2 1 4
2 3 5 100
0 8 8 100

1
1 1
9

5
4 2
0 1 100 100 0
100 2 3 1 1
100 100 4 5 100
8 7 100 6 100
7 100 100 100 9
*/